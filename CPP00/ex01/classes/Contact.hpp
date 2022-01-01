/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 07:40:27 by jjourdan          #+#    #+#             */
/*   Updated: 2021/05/11 08:16:30 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact
{
private:
    std::string _FirstName;
    std::string _LastName;
    std::string _Nickname;
    std::string _Login;
    std::string _PostalAddress;
    std::string _Email;
    std::string _Phone;
    std::string _Birthday;
    std::string _FavoriteMeal;
    std::string _UnderwearColor;
    std::string _DarkestSecret;

public:
    Contact();
    ~Contact();
    void setFirstName();
    void setLastName();
    void setNickname();
    void setLogin();
    void setPostalAddress();
    void setEmail();
    void setPhone();
    void setBirthday();
    void setFavoriteMeal();
    void setUnderwearColor();
    void setDarkestSecret();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getLogin();
    std::string getPostalAddress();
    std::string getEmail();
    std::string getPhone();
    std::string getBirthday();
    std::string getFavoriteMeal();
    std::string getUnderwearColor();
    std::string getDarkestSecret();
};

#endif