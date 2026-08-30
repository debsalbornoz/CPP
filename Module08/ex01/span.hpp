/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:59:14 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/10 17:54:59 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

class Span{
	private:
		unsigned int _n;
		std::vector<int> _vec;
	public:
		Span();
		Span(unsigned int i);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		template<typename It>
		void addNumber(It begin, It end)
		{
			if (_vec.size() + std::distance(begin, end) > _n)
						throw std::out_of_range("Not enough space in Span!");
			_vec.insert(_vec.end(), begin, end);
		}
		void addNumber(unsigned int i);
		int shortestSpan();
		int longestSpan();
		unsigned int getN();
};
#endif