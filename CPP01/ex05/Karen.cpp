/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:36:26 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 22:23:18 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug()
{
	std::cout << "This is a debug message!" << std::endl;
}

void	Karen::info()
{
	std::cout << "This is an info message!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "This is a warning message!" << std::endl;
}

void	Karen::error()
{
	std::cout << "This is an error message!" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	strs[] = {"debug", "info", "warning", "error"};
	typedef	void	(Karen::*Actions)(void);
	Actions	funcs[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == strs[i])
		{
			(this->*(funcs[i]))();
			break ;
		}
	}
}
