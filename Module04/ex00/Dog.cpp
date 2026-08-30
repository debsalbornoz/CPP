#include "Dog.hpp"

Dog::Dog(void){
	type = "Dog";
	std::cout << PURPLE << "Dog constructor called\n" << RESET;
}

Dog::~Dog(){
	std::cout << PURPLE << "Dog destructor called\n" << RESET;
}

Dog::Dog(const Dog &copy)
{
	std::cout << PURPLE << "Dog copy constructor called" << std::endl << RESET;
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		std::cout << PURPLE << "Dog copy assignment operator called" << std::endl << RESET;
	}

	return (*this);
}

void Dog::makeSound() const
{
	std::cout << PURPLE << "Auau!\n" << RESET;
}