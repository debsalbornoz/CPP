/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:14:55 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 10:36:53 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "Animal";
	std::cout << GREEN << "Animal constructor called\n" << RESET;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << GREEN << "Animal constructor called\n" << RESET;
}
Animal::~Animal()
{
	std::cout << GREEN << "Animal destructor called\n" << RESET;
}

Animal::Animal(const Animal &copy)
{
	std::cout << GREEN << "Animal copy constructor called\n" << RESET;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		std::cout << GREEN << "Animal copy assignment operator called\n" << RESET;
	}
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << GREEN << "*random noise*\n" << RESET;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
