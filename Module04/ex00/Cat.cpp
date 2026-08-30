/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:05:44 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 10:38:08 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	type = "Cat";
	std::cout << PINK << "Cat constructor called\n" << RESET;
}

Cat::~Cat(){
	std::cout << PINK << "Cat destructor called\n" << RESET;
}

Cat::Cat(const Cat &copy)
{
	std::cout << PINK << "Cat copy constructor called" << std::endl << RESET;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		std::cout << PINK << "Cat copy assignment operator called" << std::endl << RESET;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << PINK << "Miau!\n" << RESET;
}
