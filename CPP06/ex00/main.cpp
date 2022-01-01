/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 18:27:15 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iomanip>
#include <limits>
#include <limits.h>
#include <math.h>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Please give one argument!" << std::endl;
		return 1;
	}
	else if (argc > 2) {
		std::cerr << "Please give only one argument!" << std::endl;
		return 1;
	}
	double	val = atof(argv[1]);
	if (std::string(argv[1]).size() == 1)
		val = argv[1][0] - '0';
	if ((val == 0) && (argv[1][0] != '0')) {
		std::cerr << "Invalid value!" << std::endl;
		return 1;
	}
	std::cout << std::fixed << std::setprecision(1) << "char: ";
	if (((val < 32) && (val >= 0)) || ((val > 127) && (val <= 255)))
		std::cout << "Non displayable";
	else if (isinf(val) || isnan(val) || (val > 255) || (val < 0))
		std::cout << "Impossible";
	else
		std::cout << static_cast<char>(val);
	std::cout << std::endl << "int: ";
	if (isinf(val) || isnan(val) || (val > INT_MAX) || (val < INT_MIN))
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(val);
	std::cout << std::endl << "float: " << static_cast<float>(val) << "f" << std::endl << "double: " << val << std::endl;
	return 0;
}
