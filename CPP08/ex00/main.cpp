/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:10:00 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/08 14:06:01 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(void) {
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try {
		std::cout << "Found : " << easyfind(v, 3) << std::endl;
	}
	catch (NumberNotFound &e) {
		std::cerr << "3 " << e.info() << std::endl;
	}
	try {
		std::cout << "Found : " << easyfind(v, 42) << std::endl;
	}
	catch (NumberNotFound &e) {
		std::cerr << "42 " << e.info() << std::endl;
	}
	return 0;
}
