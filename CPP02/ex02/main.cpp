/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:48:41 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/04 23:46:52 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdio.h>

int main(void) {
	printf("\ec");
	Fixed	a = 12;
	Fixed	b = 11;
	Fixed	c = 13;
	std::cout << "a=" << a << std::endl;
	if (a > 12)
		std::cout << "a(" << a << ") > 12" << std::endl;
	if (a > 11)
		std::cout << "a(" << a << ") > 11" << std::endl;
	if (a > b)
		std::cout << "a(" << a << ") > b(11)" << std::endl;
	if (a > 13)
		std::cout << "a(" << a << ") > 13" << std::endl;
	if (a >= 12)
		std::cout << "a(" << a << ") >= 12" << std::endl;
	if (a < 12)
		std::cout << "a(" << a << ") < 12" << std::endl;
	if (a < 13)
		std::cout << "a(" << a << ") < 13" << std::endl;
	if (a < c)
		std::cout << "a(" << a << ") < c(13)" << std::endl;
	if (a < 11)
		std::cout << "a(" << a << ") < 11" << std::endl;
	if (a <= 12)
		std::cout << "a(" << a << ") <= 12" << std::endl;
	if (a == 12)
		std::cout << "a(" << a << ") == 12" << std::endl;
	if (a == a)
		std::cout << "a(" << a << ") == a(12)" << std::endl;
	if (a == 13)
		std::cout << "a(" << a << ") == 13" << std::endl;
	if (a != 12)
		std::cout << "a(" << a << ") != 12" << std::endl;
	if (a != 13)
		std::cout << "a(" << a << ") != 13" << std::endl;
	if (a != c)
		std::cout << "a(" << a << ") != c(13)" << std::endl;

	std::cout << "a(" << a << ") + 1 = ";
	a = a + 1;
	std::cout << a << std::endl;

	std::cout << "a(" << a << ") - 1 = ";
	a = a - 1;
	std::cout << a << std::endl;

	std::cout << "a(" << a << ") * 2 = ";
	a = a * 2;
	std::cout << a << std::endl;

	std::cout << "a(" << a << ") / 2 = ";
	a = a / 2;
	std::cout << a << std::endl;

	std::cout << "a(" << a++ << ")++ = " << a << std::endl;
	std::cout << "++a(" << ++a << ") = " << a << std::endl;
	std::cout << "a(" << a-- << ")-- = " << a << std::endl;
	std::cout << "--a(" << --a << ") = " << a << std::endl;

	std::cout << "min(b(" << b << ") c(" << c << ")) = " << Fixed::min(b,c) << std::endl;
	std::cout << "max(b(" << b << ") c(" << c << ")) = " << Fixed::max(b,c) << std::endl;

	std::cout << "min(b(" << b << ") c(" << c << ")) = " << (Fixed::operatormin(b,c) >> 8) << std::endl;
	std::cout << "max(b(" << b << ") c(" << c << ")) = " << (Fixed::operatormax(b,c) >> 8) << std::endl;

	return 0;
}
