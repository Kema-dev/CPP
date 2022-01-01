/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:03:32 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 18:45:51 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
	int*	data;
};

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr->data);
}

Data*	deserialize(uintptr_t raw) {
	Data*	buf = new Data;
	buf->data = reinterpret_cast<int*>(raw);
	return (buf);
}

int main(void) {
	Data*	tmp = new Data;
	int	val = 42;
	tmp->data = &val;
	uintptr_t	ser = serialize(tmp);
	Data*		des = deserialize(ser);
	std::cout << *(reinterpret_cast<int*>(ser)) << std::endl << *(reinterpret_cast<int*>(des->data)) << std::endl;
	return 0;
}
