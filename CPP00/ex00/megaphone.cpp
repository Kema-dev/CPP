/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 06:23:54 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/04 20:36:57 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv++;
	int i = -1;
	while (argv[++i])
	{
		int j = -1;
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
