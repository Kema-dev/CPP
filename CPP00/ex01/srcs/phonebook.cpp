/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 07:07:39 by jjourdan          #+#    #+#             */
/*   Updated: 2021/07/28 20:40:56 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/types.h>
#include "../classes/Contact.hpp"
#include "../classes/Phonebook.hpp"

void	ft_add(int nb, Contact *contact)
{
	if (nb >= 8)
		std::cout << "\e[31mYou already have 8 contacts ! You will override your oldest conact !\e[0m" << std::endl;
	contact->setFirstName();
	contact->setLastName();
	contact->setNickname();
	contact->setLogin();
	contact->setPostalAddress();
	contact->setEmail();
	contact->setPhone();
	contact->setBirthday();
	contact->setFavoriteMeal();
	contact->setUnderwearColor();
	contact->setDarkestSecret();
	if (nb == 0)
		std::cout << "You successfully added your first contact !" << std::endl;
	else if (nb < 8)
		std::cout << "Contact added successfully, your now have " << nb + 1 << " contacts" << std::endl;
	else
			std::cout << "You just add another contact, overriding the oldest one !" << std::endl;
}

void	ft_show_contact(Contact *contact, int i)
{
	std::cout << "Here are your contact's informations:" << std::endl;
	std::cout << "Index: " << i << std::endl;
	std::cout << "First name: " << contact[i].getFirstName() << std::endl;
	std::cout << "Last name: " << contact[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[i].getNickname() << std::endl;
	std::cout << "Login: " << contact[i].getLogin() << std::endl;
	std::cout << "Postal address: " << contact[i].getPostalAddress() << std::endl;
	std::cout << "Email: " << contact[i].getEmail() << std::endl;
	std::cout << "Phone: " << contact[i].getPhone() << std::endl;
	std::cout << "Birthday: " << contact[i].getBirthday() << std::endl;
	std::cout << "Favorite meal: " << contact[i].getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << contact[i].getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << contact[i].getDarkestSecret() << std::endl;
}

void	ft_print_buf(std::string buf)
{
	if (buf.size() >= 10)
	{
		buf[9] = '.';
		buf[10] = 0;
	}
	ssize_t	i = -1;
	while (++i < (ssize_t)(10 - buf.size()))
		std::cout << " ";
	buf.resize(10);
	std::cout << buf << "|";
}

void	ft_print_list(Contact *contact, ssize_t nb)
{
	if (nb > 8)
		nb = 8;
	std::cout << "Here is your contact list:" << std::endl << std::endl;
	ssize_t	i = -1;
	std::cout << "\e[34m   Index    First Name  Last Name  Nickname\e[0m" << std::endl;
	std::cout << " ___________________________________________" << std::endl;
	while (++i < nb)
	{
		std::cout << "|         " << i << "|";
		std::string buf;
		buf = contact[i].getFirstName();
		ft_print_buf(buf);
		buf = contact[i].getLastName();
		ft_print_buf(buf);
		buf = contact[i].getNickname();
		ft_print_buf(buf);
		std::cout << std::endl << "|----------|----------|----------|----------|" << std::endl;
	}
}

void	ft_search(ssize_t nb, Contact *contact)
{
	if (nb == 0)
	{
		std::cout << "\e[31mYou currently have no contact ... Now exiting search and returning to menu ...\e[0m" << std::endl;
		return ;
	}
	ft_print_list(contact, nb);
	std::cout << "Please chose your contact by typing its index (or QUIT to quit the searching mode):" << std::endl;
	std::string index;
	std::getline(std::cin, index);
	if (index == "QUIT")
	{
		std::cout << "Successfully returned to the menu" << std::endl;
		return ;
	}
	while ((index.size() > 1) || ((index[0] - '0') >= nb))
	{
		if (index == "QUIT")
		{
			std::cout << "Successfully returned to the menu" << std::endl;
			return ;
		}
		std::cout << "\e[31mPlease enter a valid index (or type QUIT to quit the searching mode): \e[0m" << std::endl;
		std::getline(std::cin, index);
	}
	if (index.size() <= 0)
		std::cout << "You made no choice, returning to main menu !" << std::endl;
	else
		ft_show_contact(contact, index[0] - '0');
}

int	main(int argc, char **argv)
{
	std::cout << "\ec";
	if (argc > 1)
	{
		std::cout << "\e[31mPlease do not enter arguments when launching your super phone book !\e[0m" << std::endl;
		return (1);
	}
	argv++;
	std::cout << "Welcome to PhoneBook v1 !\nYou have 3 commands at your disposal:\n - 'EXIT'   to quit the program\n - 'ADD'    to add a new contact\n - 'SEARCH' to search for a specific contact" << std::endl;
	std::string command;
	std::cout << "Your command: ";
	std::getline(std::cin, command);
	Phonebook	book = Phonebook();
	ssize_t	nb_contacts = 0;
	while (command != "EXIT")
	{
		if (command == "ADD")
		{
			ft_add(nb_contacts, &book.contact[nb_contacts % 8]);
			nb_contacts++;
		}
		else if (command == "SEARCH")
			ft_search(nb_contacts, book.contact);
		else
			std::cout << "\e[31mInvalid command ! You can use either 'ADD', 'SEARCH' or 'EXIT'\e[0m" << std::endl;
		std::cout << "Your command: ";
		std::getline(std::cin, command);
	}
	std::cout << "\e[34mThanks for using PhoneBook v1 ! See you soon !\e[0m" << std::endl;
	return (0);
}
