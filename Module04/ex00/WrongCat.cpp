/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:35:06 by dlamark-          #+#    #+#             */
/*   Updated: 2025/03/26 17:29:16 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
		std::cout << "WrongCat copy assignment operator called" << std::endl;
	}

	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miau!\n";
}