/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:31:56 by debs              #+#    #+#             */
/*   Updated: 2025/12/06 14:56:42 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <cctype>
#include <limits>
#include <cmath>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign) { (void)assign; return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &str) {
	convertToChar(str);
	convertToInt(str);
	convertToFloat(str);
	convertToDouble(str);
}

void ScalarConverter::convertToChar(const std::string &str) {
	std::cout << "char: ";
	try {

		if (str.size() == 1 && !std::isdigit(str[0])) {
			if (std::isprint(str[0]))
				std::cout << "'" << str[0] << "'" << std::endl;
			else
				std::cout << "non displayable" << std::endl;
			return;
		}

		double value = std::strtod(str.c_str(), NULL);

		if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
			std::cout << "impossible" << std::endl;
		else if (!std::isprint(static_cast<int>(value)))
			std::cout << "non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(value) << "'" << std::endl;

	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::convertToInt(const std::string &str) {
	std::cout << "int: ";
	try {
		double value = std::strtod(str.c_str(), NULL);

		if (std::isnan(value) || std::isinf(value) ||
			value < static_cast<double>(std::numeric_limits<int>::min()) ||
			value > static_cast<double>(std::numeric_limits<int>::max()))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(value) << std::endl;

	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::convertToFloat(const std::string &str) {
	std::cout << "float: ";
	try {
		double value = std::strtod(str.c_str(), NULL);

		if (str == "nan" || str == "nanf" || std::isnan(value)) {
			std::cout << "nanf" << std::endl;
			return;
		}
		if (str == "+inf" || str == "+inff" || value == INFINITY) {
			std::cout << "+inff" << std::endl;
			return;
		}
		if (str == "-inf" || str == "-inff" || value == -INFINITY) {
			std::cout << "-inff" << std::endl;
			return;
		}

		float f = static_cast<float>(value);
		std::cout << std::fixed << std::setprecision(1)
				<< f << "f" << std::endl;

	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::convertToDouble(const std::string &str) {
	std::cout << "double: ";
	try {
		double value = std::strtod(str.c_str(), NULL);

		if (str == "nan" || str == "nanf" || std::isnan(value)) {
			std::cout << "nan" << std::endl;
			return;
		}
		if (str == "+inf" || str == "+inff" || value == INFINITY || value == HUGE_VAL) {
			std::cout << "+inf" << std::endl;
			return;
		}
		if (str == "-inf" || str == "-inff" || value == -INFINITY || value == -HUGE_VAL) {
			std::cout << "-inf" << std::endl;
			return;
		}

		std::cout << std::fixed << std::setprecision((1))
				<< value << std::endl;

	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}
