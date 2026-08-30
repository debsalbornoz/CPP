#include "ScavTrap.hpp"

int main(void)
{
	std::string a, b;
	std::string action = "";

	initialize_names(a, b);

	ScavTrap Scav(a);
	ScavTrap Trap(b);

	while ((action != "5" && action != "EXIT") && (Scav.getHp() > 0) && (Trap.getHp() > 0))
	{
		std::cout << "Select: 1.ATTACK, 2.REPAIR, 3.STATUS, 4.GUARD GATE or 5.EXIT\n";
		std::getline(std::cin, action);
		if (action == "1" || action == "ATTACK")
			startScavCombat(Scav, Trap);
		else if (action == "2" || action == "REPAIR")
			repair(Scav, Trap);
		else if (action == "3" || action == "STATUS")
		{
			Scav.getStatus(Scav);
			Trap.getStatus(Trap);
		}
		else if (action == "4" || action == "GUARD GATE")
		{
			Scav.guardGate();
			Trap.guardGate();
		}
		else if (action != "5" || action == "EXIT")
			std::cout << RED << "Invalid action. Please enter a valid action.\n" << RESET;
	}

	return (0);
}