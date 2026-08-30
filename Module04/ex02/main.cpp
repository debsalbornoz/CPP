/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:12:38 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 12:56:11 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Cat* cat = new Cat();
	std::cout << PINK << "Type: " << cat->getType() << " " << std::endl << RESET;
	std::cout << PINK << "Sound: " << RESET;
	cat->makeSound();
	delete cat;
	return (0);
	//AAnimal animal = new AAnimal();
}