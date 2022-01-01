/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 08:00:08 by jjourdan          #+#    #+#             */
/*   Updated: 2021/05/11 08:16:52 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName()
{
	std::string line;

	std::cout << "First name : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nFirst name : ";
		std::getline(std::cin, line);
	}
	_FirstName = line;
}

void Contact::setLastName()
{
	std::string line;

	std::cout << "Last name : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nLast name : ";
		std::getline(std::cin, line);
	}
	_LastName = line;
}

void Contact::setNickname()
{
	std::string line;

	std::cout << "Nickname : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nNickname : ";
		std::getline(std::cin, line);
	}
	_Nickname = line;
}

void Contact::setLogin()
{
	std::string line;

	std::cout << "Login : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nLogin : ";
		std::getline(std::cin, line);
	}
	_Login = line;
}

void Contact::setPostalAddress()
{
	std::string line;

	std::cout << "Postal address : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nPostal address : ";
		std::getline(std::cin, line);
	}
	_PostalAddress = line;
}

void Contact::setEmail()
{
	std::string line;

	std::cout << "Email : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nEmail : ";
		std::getline(std::cin, line);
	}
	_Email = line;
}

void Contact::setPhone()
{
	std::string line;

	std::cout << "Phone : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nPhone : ";
		std::getline(std::cin, line);
	}
	_Phone = line;
}

void Contact::setBirthday()
{
	std::string line;

	std::cout << "Birthday : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nBirthday : ";
		std::getline(std::cin, line);
	}
	_Birthday = line;
}

void Contact::setFavoriteMeal()
{
	std::string line;

	std::cout << "FavoriteMeal : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nFavoriteMeal : ";
		std::getline(std::cin, line);
	}
	_FavoriteMeal = line;
}

void Contact::setUnderwearColor()
{
	std::string line;

	std::cout << "UnderwearColor : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nUnderwearColor : ";
		std::getline(std::cin, line);
	}
	_UnderwearColor = line;
}

void Contact::setDarkestSecret()
{
	std::string line;

	std::cout << "DarkestSecret : ";
	std::getline(std::cin, line);
	while (line.size() < 1)
	{
		std::cout << "Please enter something\nDarkestSecret : ";
		std::getline(std::cin, line);
	}
	_DarkestSecret = line;
}

std::string Contact::getLastName()
{
	return _LastName;
}

std::string Contact::getFirstName()
{
	return _FirstName;
}

std::string Contact::getNickname()
{
	return _Nickname;
}

std::string Contact::getLogin()
{
	return _Login;
}

std::string Contact::getBirthday()
{
	return _Birthday;
}

std::string Contact::getPhone()
{
	return _Phone;
}

std::string Contact::getPostalAddress()
{
	return _PostalAddress;
}

std::string Contact::getEmail()
{
	return _Email;
}

std::string Contact::getFavoriteMeal()
{
	return _FavoriteMeal;
}

std::string Contact::getUnderwearColor()
{
	return _UnderwearColor;
}

std::string Contact::getDarkestSecret()
{
	return _DarkestSecret;
}