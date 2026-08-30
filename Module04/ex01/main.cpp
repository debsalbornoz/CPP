/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:12:38 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 12:32:21 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() {
	const int SIZE = 4;
	Animal* animals[SIZE];

	//Initializing dogs
	for (int i = 0; i < SIZE / 2; i++) {
		animals[i] = new Dog();
		Dog* dog = dynamic_cast<Dog*>(animals[i]);
		if (dog)
		{
			dog->setIdea(i, "I'm a dog idea!");
		}
	}
	//Inizializing cats
	for (int i = SIZE / 2; i < SIZE; i++) {
		animals[i] = new Cat();
		Cat* cat = dynamic_cast<Cat*>(animals[i]);
		if (cat) {
			cat->setIdea(i, "I'm a cat idea!");
		}
		animals[i]->makeSound();
	}
	//Getting dog ideas
	for (int i = 0; i < SIZE / 2; i++) {
		Dog* dog = dynamic_cast<Dog*>(animals[i]);
		if (dog) {
			std::cout << PURPLE << "Dog " << i << " idea: " << dog->getIdea(i) << std::endl << RESET;
		}
	}
	//Getting cat ideas
	for (int i = SIZE / 2 ; i < SIZE; i++) {
		Cat* cat = dynamic_cast<Cat*>(animals[i]);
		if (cat) {
			std::cout << PINK << "Cat " << i << " idea: " << cat->getIdea(i) << std::endl << RESET;
		}
	}
	//Changing dog idea
	Dog* dog = dynamic_cast<Dog*>(animals[SIZE/ 2 - 1]);
	dog->setIdea(SIZE/ 2 - 1, "I'm another dog idea!");
	std::cout << PURPLE << "Dog " << SIZE/ 2 - 1 << " idea: " << dog->getIdea(SIZE/ 2 - 1) << std::endl << RESET;
	//Making sounds
	for (int i = 0; i < SIZE; i++) 
	{
		animals[i]->makeSound();
	}
	//Deleting animals
	for (int i = 0; i < SIZE; i++)
	{
		delete animals[i];
	}

	//Creating deep copies
	Cat firstCat;
	firstCat.setIdea(0, "hi");
	Cat secondCat(firstCat);
	Cat thirdCat;
	thirdCat = firstCat;
	std::cout << thirdCat.getIdea(0) << '\n';

	return (0);
}