/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:12:38 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 10:59:49 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Initializing animal
	const Animal* animal = new Animal();
	std::cout << GREEN << "Type: " << animal->getType()  << " " << std::endl << RESET;
	std::cout << GREEN << "Sound: " << RESET;
	animal->makeSound();
	std::cout << "\n";
	
	//Initializing cat
	const Animal* cat = new Cat();
	std::cout << PINK << "Type: " << cat->getType() << " " << std::endl << RESET;
	std::cout << PINK << "Sound: " << RESET;
	cat->makeSound();
	std::cout << "\n";
	
	//Initializing dog
	const Animal* dog = new Dog();
	std::cout << PURPLE  << "Type: " << dog->getType() << " " << std::endl << RESET;
	std::cout << PURPLE << "Sound: " << RESET;
	dog->makeSound();
	std::cout << "\n";
	
	//Initializing wrong animal
	const WrongAnimal *Wronganimal = new WrongAnimal();
	const WrongAnimal *Wrongcat = new WrongCat();
	std::cout << "Sound: ";
	Wrongcat->makeSound();
	std::cout << "\n";
	
	delete animal;
	delete cat;
	delete dog;
	delete Wrongcat;
	delete Wronganimal;
	return (0);
}



/*int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongCat* w = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	w->makeSound();

	delete i;
	delete j;
	delete meta;
	delete w;
	return 0;
}
*/


