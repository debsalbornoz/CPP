/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:15:00 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 10:53:34 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define BLUE "\033[38;5;32m" 
#define PURPLE "\033[34m"
#define PINK "\033[38;5;13m"
#define GREEN "\033[32m"
#define RESET "\033[0m" 

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal();
		virtual void makeSound(void) const ;
		virtual std::string getType() const;
};

#endif