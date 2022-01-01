/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:53:21 by jjourdan          #+#    #+#             */
/*   Updated: 2021/11/19 14:18:48 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	self;

	if (argc != 2)
	{
		std::cout << "One and only one level please!" << std::endl;
		return (1);
	}
	self = Karen();
	std::string	strs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == strs[i])
		{
			while (i < 4)
			{
				self.complain(strs[i]);
				i++;
			}
			return (0);
		}
	}
	std::cout << "Probably complaining about insignificant problems" << std::endl;
	return (-1);
}