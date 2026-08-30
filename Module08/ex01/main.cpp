/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:59:09 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/10 17:54:40 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{

	Span sp_small(5);
	sp_small.addNumber(6);
	sp_small.addNumber(3);
	sp_small.addNumber(17);
	sp_small.addNumber(9);
	sp_small.addNumber(11);

	std::cout << "=== Small Test ===" << std::endl;
	std::cout << "Shortest Span: " << sp_small.shortestSpan() << std::endl;
	std::cout << "Longest Span:  " << sp_small.longestSpan() << std::endl;

	const int SIZE = 10000;
	Span sp_large(SIZE);

	std::vector<int> randomNumbers;
	randomNumbers.reserve(SIZE);

	std::srand(static_cast<unsigned int>(std::time(0)));
	for (int i = 0; i < SIZE; ++i)
		randomNumbers.push_back(std::rand());

	sp_large.addNumber(randomNumbers.begin(), randomNumbers.end());

	std::cout << "\n=== Large Test (10,000 numbers) ===" << std::endl;
	std::cout << "Shortest Span: " << sp_large.shortestSpan() << std::endl;
	std::cout << "Longest Span:  " << sp_large.longestSpan() << std::endl;

	return 0;
}
