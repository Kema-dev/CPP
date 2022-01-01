/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:09:53 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/26 15:10:39 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>

class NumberNotFound : public std::exception
{
	public:
		virtual const std::string	info() const throw()
		{
			return ("Error: can't be found!");
		}
};

template<typename T>
int	easyfind(T elem, int nb) {
	typename T::const_iterator	it;
	typename T::const_iterator	it_end = elem.end();

	for (it = elem.begin(); it != it_end; ++it) {
		if (*it == nb)
			return (*it);
	};
	throw (NumberNotFound());
	return (0);
}

#endif
