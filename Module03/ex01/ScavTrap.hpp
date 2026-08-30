#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
		void ScavBattle(ScavTrap &a, ScavTrap &b);
		void ScavRepair(ScavTrap &a, int amount_repaired);
};

void startScavCombat(ScavTrap &a, ScavTrap &b);
void repair(ScavTrap &a, ScavTrap &b);

#endif