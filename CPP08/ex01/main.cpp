/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:10:00 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/13 10:51:03 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int	getRand(void) {
	return std::rand()%1000000;
}

int main()
{
	Span sp = Span(5);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span with 0 element : " << e.info() << std::endl;
	}
	sp.addNumber(5);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span with 1 element : " << e.info() << std::endl;
	}
	sp.addNumber(8);
	sp.addNumber(17);
	sp.addNumber(-1);
	sp.addNumber(1);
	try {
		sp.addNumber(42);
	}
	catch (TooManyValuesException &e) {
		std::cerr << "Adding element to Span(5) with 5 elements : " << e.info() << std::endl;
	}
	try {
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span Error : " << e.info() << std::endl;
	}
	try {
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span Error : " << e.info() << std::endl;
	}
	Span sp2 = Span(5);
	sp2.addNumber(2);
	sp2.addRangeNumber(3, 5);
	// for (int i = 0; i < static_cast<int>(sp2._v.size()); i++) {std::cout << "Span[" << i << "] : " << sp2._v[i] << std::endl;}
	try {
		sp2.addRangeNumber(3, 5);
	}
	catch (TooManyValuesException &e) {
		std::cerr << "Adding 3 elements to a Span(5) with already 4 elements : " << e.info() << std::endl;
	}

	int max = 20000;
	Span	test = Span(max);
	srand((unsigned int)time(NULL));
	int	i = 0;
	while (i++ < max) {
		int buf = std::rand()%10000000;
		test.addNumber(buf);
	}
	try {
		std::cout << "Shortest span : " << test.shortestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span Error : " << e.info() << std::endl;
	}
	try {
		std::cout << "Longest span : " << test.longestSpan() << std::endl;
	}
	catch (NoSpanPossible &e) {
		std::cerr << "Span Error : " << e.info() << std::endl;
	}
}
