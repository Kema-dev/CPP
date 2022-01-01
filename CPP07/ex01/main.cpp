/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:02:36 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/23 15:11:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <unistd.h>
#include <sys/types.h>

void	change_str(std::string& i) {
	i.append("changed");
}

int main(void) {
	int	arr[] = {0,1,2,3,4,5,6,7,8,9};

	for (size_t i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	::iter(arr, 10);
	for (size_t i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	::iter(arr, 10, &add_one);
	for (size_t i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::string	str[] = {"Hello, world!", "42", "WOW"};
	::iter(str, 3, &change_str);
	for (size_t i = 0; i < 3; i++) {
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
