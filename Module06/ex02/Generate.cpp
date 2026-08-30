/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student                                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:55:01 by student           #+#    #+#             */
/*   Updated: 2025/12/06 12:55:01 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate() {
	int random = std::rand() % 3;
	switch(random) {
		case 0:
			std::cout << "Generated: A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generated: B" << std::endl;
			return new B();
		default:
			std::cout << "Generated: C" << std::endl;
			return new C();
	}
}


void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type (pointer): A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type (pointer): B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type (pointer): C" << std::endl;
	else
		std::cout << "Unknown type (pointer)" << std::endl;
}


void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type (reference): A" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type (reference): B" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type (reference): C" << std::endl;
		return;
	} catch (...) {}

	std::cout << "Unknown type (reference)" << std::endl;
}
