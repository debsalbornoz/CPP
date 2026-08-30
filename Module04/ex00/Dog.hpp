/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:14:51 by dlamark-          #+#    #+#             */
/*   Updated: 2025/03/25 18:17:30 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
	Dog(void);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	virtual ~Dog();
	virtual void makeSound(void) const;
};

#endif