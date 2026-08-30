/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:02:23 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/10 17:38:06 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	std::list<int> l;
	
	int values[] = {1, 2, 3, 4, 5};
	int size = 5;

	for (int i = 0; i < size; ++i) {
		v.push_back(values[i]);
		l.push_front(values[i]);
	}

	try {
		std::vector<int>::iterator it = easyfind(v, 3);
		std::list<int>::iterator it_l = easyfind(l, 2);
		std::cout << "Found: " << *it << std::endl;
		std::cout << "Found: " << *it_l << std::endl;
		it = easyfind(v, 10);

	} catch (const std::runtime_error &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}