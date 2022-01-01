/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:03:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/23 14:36:58 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template<typename T>
T		max(T &x, T &y) {
	return (x >= y ? x : y);
}

template<typename T>
T		min(T &x, T &y) {
	return (x < y ? x : y);
}

template<typename T>
void	swap(T &x, T &y) {
	T	buf = x;
	x = y;
	y = buf;
}

#endif