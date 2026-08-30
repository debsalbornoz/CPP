/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:59:11 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/10 17:59:16 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

		Span::Span():_n(0){};
		Span::Span(unsigned int i): _n(i) {};
		Span::Span(const Span &other): _n(other._n) {};
		
		Span &Span::operator=(const Span &other)
		{
			if (this == &other)
				return *this;

			_vec = other._vec;
			_n = other._n; 
			return *this;
		}
		
		Span::~Span(){};
		void Span::addNumber(unsigned int i)
		{
			if (_vec.size() >= _n)
				throw std::overflow_error("Error! Span is full");
			_vec.push_back(i);
		}
	
	int Span::shortestSpan() {
		if (_vec.size() <= 1)
			throw std::length_error("Not enough numbers!");

		std::vector<int> tmp = _vec;
		std::sort(tmp.begin(), tmp.end());

		int minSpan = INT_MAX;
		for (size_t i = 0; i < tmp.size() - 1; ++i) {
			int span = tmp[i + 1] - tmp[i];
			if (span < minSpan)
				minSpan = span;
		}
		return minSpan;
	}

	int Span::longestSpan() {
		if (_vec.size() <= 1)
			throw std::length_error("Not enough numbers!");
		int minVal = *std::min_element(_vec.begin(), _vec.end());
		int maxVal = *std::max_element(_vec.begin(), _vec.end());
		return maxVal - minVal;
	}
	

