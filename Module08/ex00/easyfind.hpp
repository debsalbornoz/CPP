/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:02:25 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/10 17:37:57 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T &c, int i) {
	typename T::iterator it = std::find(c.begin(), c.end(), i);
	if (it == c.end()) {
		throw std::runtime_error("Element not found!");
	}
	return (it);
}

#endif