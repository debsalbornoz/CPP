#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <sstream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define PURPLE "\033[34m"
#define RESET "\033[0m"
#define PINK "\033[95m"
#define YELLOW "\033[33m"

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap();
		void		attack(const std::string& target);
		void		setDamage(unsigned int attack_damage);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName();
		int			getEp();
		int			getHp();
		int			getDamage();
		void		performAttack(ClapTrap &a, ClapTrap &b, int damage);
		void		getStatus(ClapTrap &claptrap);
};

	void		initialize_names(std::string &p1, std::string &p2);
	void		startCombat(ClapTrap &a, ClapTrap &b);
	void		restoreHealth(ClapTrap &a, ClapTrap &b);


#endif