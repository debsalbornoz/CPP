/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:38:59 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 11:55:57 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::string idea = "random idea";
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
	std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = copy.ideas[i];
		}
		std::cout << "Brain copy assignment operator called" << std::endl;
	}
	return (*this);
}

std::string *Brain::getIdea() const
{
	return ((std::string *)this->ideas);
}

void Brain::setIdea(int i, const std::string &idea)
{
	ideas[i] = idea;
}
std::string Brain::getIdea(int i) const
{
	return ideas[i];
}