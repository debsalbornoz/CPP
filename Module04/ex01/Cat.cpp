/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:05:44 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 12:31:09 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void){
	type = "Cat";
	std::cout << PINK << "Cat constructor called\n" << RESET;
	this->brain = new Brain(); 
}

Cat::~Cat(){
	std::cout << PINK << "Cat destructor called\n" << RESET;
	delete this->brain;
}

Cat::Cat(const Cat &copy)
{
	brain = new Brain();  // Aloca uma nova memória
	*brain = *copy.brain;
	std::cout << PINK << "Cat copy constructor called" << std::endl << RESET;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy) {
		delete brain;
		brain = new Brain();
		*brain = *copy.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << PINK << "Miau!\n" << RESET;
}

std::string *Cat::getBrain() const
{
	return this->brain->getIdea();
}

void Cat::setIdea(int index, std::string idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}