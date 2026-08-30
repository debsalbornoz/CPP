#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	name = "Default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.name)
{
	*this = copy;
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	std::cout << "FragTrap " << name << " assignment operator called" << std::endl;
	return (*this);
}


void FragTrap::attack(const std::string& target)
{
	energyPoints -= 1;
	std::cout << GREEN << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl << RESET;
}

void battle(FragTrap &a, FragTrap &b)
{
	std::string target = "";
	std::string amount = "";

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
			a.FragBattle(b,a);
		else if (target == b.getName() && a.getHp() > 0 )
			b.FragBattle(a,b);
	}
}

void FragTrap::FragBattle(FragTrap &attacker, FragTrap &target)
{
	if (attacker.energyPoints <= 0)
	{
		std::cout << RED << "FragTrap " << attacker.getName() << " has no energy" << std::endl << RESET;
		return;
	}
	else
		attacker.attack(target.getName());
	if (target.hitPoints <= 0)
		std::cout << RED << "FragTrap " << name << " is dead" << std::endl << RESET;
	else
	{
		target.takeDamage(attacker.attackDamage);
		if (target.hitPoints <= 0)
			std::cout << RED << "FragTrap " << name << " is dead" << std::endl << RESET;
		else
			std::cout << YELLOW << "FragTrap " << name << " takes " << attacker.attackDamage << " points of damage" << std::endl << RESET;
	}
}

void repair(FragTrap &a, FragTrap &b)
{
	std::string amount = "";
	std::string FragTrap = "";

	while (FragTrap != a.getName() && FragTrap != b.getName())
	{
		std::cout << "Enter FragTrap to be repaired: \n";
		std::getline(std::cin, FragTrap);

		if (FragTrap != a.getName() && FragTrap != b.getName()) 
		{
			std::cout << "Invalid target. Please enter a valid name.\n";
			continue;
		}
		std::cout << "Enter amount to be repaired: \n";
		std::getline(std::cin, amount);

		unsigned int amount_repaired = 0;
		std::istringstream(amount) >> amount_repaired;

		if (FragTrap == a.getName())
			a.FragRepair(a, amount_repaired);
		else if (FragTrap == b.getName())
			b.FragRepair(b, amount_repaired);
	}
}

void FragTrap::FragRepair(FragTrap &a, int amount_repaired)
{
	if (a.energyPoints>= 0 && a.hitPoints > 0)
	{
		a.beRepaired(amount_repaired);
		std::cout << PINK << "FragTrap " << a.getName() << " is repaired for " << amount_repaired << " hit points" << std::endl << RESET;
	}
	if (a.energyPoints <= 0)
		std::cout << PINK << "FragTrap " << a.getName() << " has no energy" << std::endl << RESET;
	if (a.hitPoints <= 0)
		std::cout << RED << "FragTrap " << a.getName() << " is dead" << std::endl << RESET;
}

void	FragTrap::highFivesGuys(void) 
{
	std::cout << PURPLE << "FragTrap " << this->name << " high fives guys!" << std::endl << RESET;
	energyPoints -= 1;
}
