/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:06:16 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/04 23:08:33 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <stdlib.h>
# include <dirent.h>

void	ft_replace(std::string filename, std::string s1, std::string s2)
{
	if (s1 == s2)
	{
		std::cout << "Please don't use two same strings" << std::endl;
	}
	if ((filename.empty()) || (s1.empty()) || (s2.empty()))
	{
		std::cout << "At least one argument is empty !" << std::endl;
		exit(-1);
	}
	DIR	*dir = opendir(filename.c_str());
	if (dir != nullptr)
	{
		std::cout << "Specified filename is a directory" << std::endl;
		closedir(dir);
		exit(-1);
	}
	std::ifstream file;
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Can't open the file" << std::endl;
		exit(-1);
	}
	std::stringstream strStream;
	strStream << file.rdbuf();
	file.close();
	std::string str = strStream.str();
	size_t	place = 0;
	while ((place = str.find(s1, place)) != std::string::npos)
	{
		str.erase(place, s1.length());
		str.insert(place, s2);
		place += s2.length();
	}
	std::string	app = ".replace";
	filename += app;
	std::ofstream replaced;
	replaced.open(filename.c_str());
	if (!replaced.is_open())
	{
		std::cout << "Can't create the new file" << std::endl;
		exit(-1);
	}
	replaced << str;
	replaced.close();
	exit(0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please give a file and two strings as arguments" << std::endl;
		exit(-1);
	}
	ft_replace(argv[1], argv[2], argv[3]);
	return (0);
}
