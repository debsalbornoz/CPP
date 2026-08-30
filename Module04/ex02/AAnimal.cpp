/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:14:55 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 12:37:21 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	type = "AAnimal";
	std::cout << GREEN << "AAnimal constructor called\n" << RESET;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << GREEN << "AAnimal constructor called\n" << RESET;
}
AAnimal::~AAnimal()
{
	std::cout << GREEN << "AAnimal destructor called\n" << RESET;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << GREEN << "AAnimal copy constructor called\n" << RESET;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		std::cout << GREEN << "AAnimal copy assignment operator called\n" << RESET;
	}
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}
