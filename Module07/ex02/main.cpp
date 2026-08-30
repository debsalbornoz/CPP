/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:05:30 by dlamark-          #+#    #+#             */
/*   Updated: 2025/12/07 12:31:30 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"


struct Person {
	std::string name;
	int age;

	Person() : name("Random"), age(0) {}
	Person(std::string n, int i) : name(n), age(i) {}
};

std::ostream& operator<<(std::ostream& os, const Person& p) {
	os << p.name << " (" << p.age << ")";
	return os;
}

int main() {
	std::cout << "=== Int ===" << std::endl;
	Array<int> empty;
	
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i * 10;

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << "\n\n";

	std::cout << "=== Double ===" << std::endl;
	Array<double> b(3);
	b[0] = 1.1;
	b[1] = 2.2;
	b[2] = 3.3;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << "\n\n";

	std::cout << "=== String ===" << std::endl;
	Array<std::string> c(2);
	c[0] = "Hello";
	c[1] = "World!";

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << "\n\n";

	std::cout << "=== Complex type ===" << std::endl;
	Array<Person> d(2);
	d[0] = Person("Ana", 30);
	d[1] = Person("Maria", 20);

	for (unsigned int i = 0; i < d.size(); i++)
		std::cout << d[i] << std::endl;
	std::cout << std::endl;

	std::cout << "=== Deep copy ===" << std::endl;
	Array<int> original(3);
	original[0] = 10;
	original[1] = 20;
	original[2] = 30;

	Array<int> copy(original);

	copy[0] = 999;

	std::cout << "Original: ";
	for (unsigned int i = 0; i < original.size(); i++)
		std::cout << original[i] << " ";
	std::cout << "\n";

	std::cout << "Copy:	";
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << "\n\n";

	std::cout << "=== Exception ===" << std::endl;
	try {
		std::cout << c[20] << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}