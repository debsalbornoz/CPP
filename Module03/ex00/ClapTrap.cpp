#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
	std::cout << "ClapTrap" << name << "copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
		std::cout << "ClapTrap" << name << "copy assignment operator called" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}
std::string ClapTrap::getName()
{
	return (name);
}

int ClapTrap::getEp()
{
	return (energyPoints);
}

int ClapTrap::getHp()
{
	return (hitPoints);
}
int ClapTrap::getDamage()
{
	return (attackDamage);
}

void ClapTrap::setDamage(unsigned int amount)
{
	attackDamage = amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
}

void initialize_names(std::string &p1, std::string &p2)
{
	std::cout << "Enter first name: \n";
	std::getline(std::cin, p1);

	std::cout << "Enter second name: \n";
	std::getline(std::cin, p2);
}

void ClapTrap::getStatus(ClapTrap &claptrap)
{
	std::cout << PURPLE << claptrap.name << " has " << claptrap.hitPoints << " hit points and " << claptrap.energyPoints << " energy points\n" << RESET;
}

void ClapTrap::attack(const std::string& target)
{
	
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints -=1;
		std::cout << GREEN << "ClapTrap " << name << " atacks " << target;
		std::cout << ",causing " << attackDamage << " points of damage!" << std::endl << RESET;
	}
}

void startCombat(ClapTrap &a, ClapTrap &b)
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
		std::cout << "Enter amount of damage: \n";
		std::getline(std::cin, amount);
		unsigned int damage = 0;
		std::istringstream(amount) >> damage;
		if (target == a.getName() && b.getHp() > 0)
			b.performAttack(a, b, damage);
		else if (target == b.getName() && a.getHp() > 0 )
			a.performAttack(b,a, damage);
	}
}

void ClapTrap::performAttack(ClapTrap &target, ClapTrap &attacker, int damage)
{
	if (attacker.energyPoints < 0)
	{
		std::cout << RED << "ClapTrap " << attacker.name << " has no energy" << std::endl << RESET;
			return;
	}
	attacker.setDamage(damage);
	if (attacker.energyPoints > 0)
	{
		attacker.attack(target.getName());
		target.takeDamage(damage);
		if (target.hitPoints <= 0 )
			std::cout << RED <<"ClapTrap " << target.name << " is dead" << std::endl << RESET;
	}
	else if (attacker.getHp() <= 0)
		std::cout << RED <<"ClapTrap " << attacker.name << " is dead" << std::endl << RESET;
	else if (attacker.energyPoints <= 0)
		std::cout << PURPLE <<"ClapTrap " << attacker.name << " has no energy" << std::endl << RESET;
}

void restoreHealth(ClapTrap &a, ClapTrap &b)
{
	std::string amount = "";
	std::string claptrap = "";

	while (claptrap != a.getName() && claptrap != b.getName())
	{
		std::cout << "Enter claptrap to be repaired: \n";
		std::getline(std::cin, claptrap);

		if (claptrap != a.getName() && claptrap != b.getName()) 
		{
			std::cout << "Invalid target. Please enter a valid name.\n";
			continue;
		}
		std::cout << "Enter amount to be repaired: \n";
		std::getline(std::cin, amount);

		unsigned int amount_repaired = 0;
		std::istringstream(amount) >> amount_repaired;

		if (claptrap == a.getName())
			a.beRepaired(amount_repaired);
		else if (claptrap == b.getName())
			b.beRepaired(amount_repaired);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0)
		std::cout << "Claptrap " << name << " can't be repaired because it is dead" << std::endl;
	if (energyPoints > 0)
	{
		hitPoints += amount;
		energyPoints -= 1;
		std::cout << PINK << "ClapTrap " << name << " is repaired for " << amount << " hit points" << std::endl << RESET;
	}
	if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no energy" << std::endl;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
}
