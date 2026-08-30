/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:26:54 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/07 12:19:15 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <class T>
class Array
{
private:
	T* elements;
	unsigned int _size;

public:
	Array() : elements(0), _size(0) {}

	Array(unsigned int n) : elements(new T[n]()), _size(n) {}

	Array(const Array &other) : elements(0), _size(0) {
		*this = other;
	}

	~Array() {
		delete[] elements;
	}

	Array& operator=(const Array &other) {
		if (this != &other) {
			delete[] elements;
			_size = other._size;
			elements = (_size > 0) ? new T[_size] : 0;
			for (unsigned int i = 0; i < _size; i++)
				elements[i] = other.elements[i];
		}
		return *this;
	}

	T& operator[](unsigned int index) {
		if (index >= _size)
			throw OutOfBoundsException();
		return elements[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= _size)
			throw OutOfBoundsException();
		return elements[index];
	}

	unsigned int size() const {
		return _size;
	}

	class OutOfBoundsException : public std::exception {
	public:
		const char* what() const throw() {
			return "Index outside the limits!";
		}
	};
};

#endif
