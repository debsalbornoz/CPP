/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:07:10 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/06 13:08:03 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Base.hpp"

int main() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for (int i = 0; i < 5; ++i) {
		Base* obj = generate();

		identify(obj);
		identify(*obj);

		delete obj;
		std::cout << "---------------------" << std::endl;
	}

	return (0);
}
