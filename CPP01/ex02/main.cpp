/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:03:53 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/04 22:31:44 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "Now displaying addresses:\nString:    " << &str << "\nPointer:   " << stringPTR << "\nReference: " << &stringREF << "\nAnd it's done !" << std::endl;
	std::cout << "\nNow displaying strings:\nString:    " << str << "\nPointer:   " << *stringPTR << "\nReference: " << stringREF << "\nAnd it's done !" << std::endl;
	return(0);
}
