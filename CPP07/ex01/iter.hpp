/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:03:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/23 15:15:24 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T* arr, size_t size, void (*func)(T&)) {
	for (size_t i = 0; i < size; i++) {
		func(arr[i]);
	}
}

template<typename T>
void	iter(T* arr, size_t size) {
	static_cast<void>(arr);
	static_cast<void>(size);
}

template<typename T>
void	add_one(T& i) {
	i++;
}

#endif