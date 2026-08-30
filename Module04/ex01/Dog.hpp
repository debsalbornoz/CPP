/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:14:51 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 11:45:24 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
	Dog(void);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	virtual ~Dog();
	virtual void makeSound(void) const;
	std::string *getBrain() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif