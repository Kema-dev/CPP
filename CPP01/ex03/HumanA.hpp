/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 07:01:04 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 19:09:16 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <sys/types.h>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(std::string dname, Weapon& dweapon);
		~HumanA();
		void	attack();
};

#endif /* ********************************************************** ZOMBIE_H */