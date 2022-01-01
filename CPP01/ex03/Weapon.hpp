/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 06:59:01 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 18:57:30 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <sys/types.h>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string dtype);
		~Weapon();
		void		setType(std::string dtype);
		std::string&	getType();
};

#endif /* ********************************************************** ZOMBIE_H */