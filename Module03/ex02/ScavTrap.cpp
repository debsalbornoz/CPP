#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.name)
{
	*this = copy;
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}

	std::cout << "ScavTrap " << name << " assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
std::cout << PINK << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl << RESET;
}

void ScavTrap::attack(const std::string& target)
{
	energyPoints -= 1;
	std::cout << GREEN << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl << RESET;
}

void startScavCombat(ScavTrap &a, ScavTrap &b)
{
	std::string target = "";

	while (target != a.getName() && target != b.getName())
	{
		std::cout << "Enter target: \n";
		std::getline(std::cin, target);

		if (target != a.getName() && target != b.getName())
		{
			std::cout << RED << "Invalid target. Please enter a valid name.\n" << RESET;
			continue;
		}
		if (target == a.getName() && b.getHp() > 0)
			a.ScavBattle(b,a);
		else if (target == b.getName() && a.getHp() > 0 )
			b.ScavBattle(a,b);
	}
}

void ScavTrap::ScavBattle(ScavTrap &attacker, ScavTrap &target)
{
	if (attacker.getEp() <= 0)
	{
		std::cout << RED << "ScavTrap " << attacker.name << " has no energy" << std::endl << RESET;
		return;
	}
	else
		attacker.attack(target.name);
	if (target.getHp() <= 0)
		std::cout << RED << "ScavTrap " << name << " is dead" << std::endl << RESET;
	else
	{
		target.takeDamage(attacker.attackDamage);
		if (target.hitPoints <= 0)
			std::cout << RED << "ScavTrap " << name << " is dead" << std::endl << RESET;
		else
			std::cout << YELLOW << "ScavTrap " << name << " takes " << attacker.attackDamage << " points of damage" << std::endl << RESET;
	}
}

void repair(ScavTrap &a, ScavTrap &b)
{
	std::string amount = "";
	std::string ScavTrap = "";

	while (ScavTrap != a.getName() && ScavTrap != b.getName())
	{
		std::cout << "Enter ScavTrap to be repaired: \n";
		std::getline(std::cin, ScavTrap);

		if (ScavTrap != a.getName() && ScavTrap != b.getName()) 
		{
			std::cout << "Invalid target. Please enter a valid name.\n";
			continue;
		}
		std::cout << "Enter amount to be repaired: \n";
		std::getline(std::cin, amount);

		unsigned int amount_repaired = 0;
		std::istringstream(amount) >> amount_repaired;

		if (ScavTrap == a.getName())
			a.ScavRepair(a, amount_repaired);
		else if (ScavTrap == b.getName())
			b.ScavRepair(b, amount_repaired);
	}
}

void ScavTrap::ScavRepair(ScavTrap &scavtrap, int amount)
{
	if (scavtrap.energyPoints >= 0 && scavtrap.hitPoints > 0)
	{
		hitPoints += amount;
		energyPoints --;
		std::cout << PINK << "ScavTrap " << scavtrap.getName() << " is repaired for " << amount << " hit points" << std::endl << RESET;
	}
	if (scavtrap.energyPoints  <= 0)
		std::cout << PINK << "ScavTrap " << scavtrap.name << " has no energy" << std::endl << RESET;
	if (scavtrap.hitPoints <= 0)
		std::cout << RED << "ScavTrap " << scavtrap.name << " is dead" << std::endl << RESET;
}