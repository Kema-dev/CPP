/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 07:01:24 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 19:06:43 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <sys/types.h>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string dname);
		~HumanB();
		void	setName(std::string dname);
		void	setWeapon(Weapon &dweapon);
		void	attack();
};

#endif /* ********************************************************** ZOMBIE_H */