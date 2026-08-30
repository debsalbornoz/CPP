#include "FragTrap.hpp"

int main(void)
{
	std::string a = "";
	std::string b = "";
	std::string action = "";

	initialize_names(a,b);
	
	FragTrap Frag(a);
	FragTrap Trap(b);

	while (action != "5" && (Frag.getHp() > 0) && (Trap.getHp() > 0))
	{
		std::cout << "Select: 1.ATTACK, 2.REPAIR, 3.STATUS, 4.HIGH FIVE or 5.EXIT\n";
		std::getline(std::cin, action);
		if (action == "1" || action == "ATTACK")
			battle(Frag, Trap);
		else if (action == "2" || action == "REPAIR")
			repair(Frag, Trap);
		else if (action == "3" || action == "STATUS")
		{
			Frag.getStatus(Frag);
			Trap.getStatus(Trap);
		}
		else if (action == "4" || action == "HIGH FIVE")
		{
			Frag.highFivesGuys();
			Trap.highFivesGuys();
		}
		else if (action != "5" || action == "EXIT")
			std::cout << RED << "Invalid action. Please enter a valid action.\n" << RESET;
	}
	return (0);
}