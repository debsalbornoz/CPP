/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:39:08 by dlamark-          #+#    #+#             */
/*   Updated: 2025/04/06 11:51:02 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &copy);
		~Brain();
		std::string *getIdea() const;
		void setIdea(int i, const std::string &idea);
		std::string getIdea(int i) const;
};

#endif
