/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:15:00 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 12:52:39 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#define BLUE "\033[38;5;32m" 
#define PURPLE "\033[34m"
#define PINK "\033[38;5;13m"
#define GREEN "\033[32m"
#define RESET "\033[0m" 

class AAnimal
{
	protected:
		std::string type;
		AAnimal(void);
		AAnimal(std::string type);
	public:
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		virtual ~AAnimal();
		virtual void makeSound(void) const = 0;
		virtual std::string getType() const;
};

#endif