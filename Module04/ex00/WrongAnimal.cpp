#include "WrongAnimal.hpp"
#include "Animal.hpp"
WrongAnimal::WrongAnimal(void)
{
	type = "WrongAnimal";
	std::cout << BLUE << "WrongAnimal constructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << BLUE << "WrongAnimal constructor called\n" << RESET;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "WrongAnimal destructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << BLUE << "WrongAnimal copy constructor called\n" << RESET;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		std::cout << BLUE << "WrongAnimal copy assignment operator called\n" << RESET;
	}

	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "*Wrong animal make sound called*\n" << RESET;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
