#include "Dog.hpp"


Dog::Dog(void){
	type = "Dog";
	std::cout << PURPLE << "Dog constructor called\n" << RESET;
	this->brain = new Brain(); 
}

Dog::~Dog(){
	std::cout << PURPLE << "Dog destructor called\n" << RESET;
	delete this->brain;
}

Dog::Dog(const Dog &copy)
{
	brain = new Brain();  // Aloca uma nova memória
	*brain = *copy.brain;
	std::cout << PINK << "Dog copy constructor called" << std::endl << RESET;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy) {
		delete brain;
		brain = new Brain();
		*brain = *copy.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << PURPLE << "Auau!\n" << RESET;
}

std::string *Dog::getBrain() const
{
	return this->brain->getIdea();
}

void Dog::setIdea(int index, std::string idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return brain->getIdea(index);
}