/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:26:26 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/07 11:23:53 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main() {
	
	int arr1[4] = {0,1 , 2, 3};
	std::string arr2[3] = {"hello", "world", "!"};
	double arr3[3] = {4.5, 5.3, 7.8};
	
	iter(arr1, 4, &printElement);
	std::cout << std::endl;
	iter(arr2, 3, &printElement);
	std::cout << std::endl;
	iter(arr3, 3, &printElement);
	std::cout << std::endl;

}
