/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:44:17 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/07 11:22:20 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*func)(T &)) {
	for (size_t i = 0; i < length; ++i)
			func(array[i]);
}

template <typename T>
void iter(const T *array, size_t length, void (*func)(const T &)) {
	for (size_t i = 0; i < length; ++i)
			func(array[i]);
}

template <typename T>
void printElement(const T &element) {
	std::cout << element << " ";
}

#endif