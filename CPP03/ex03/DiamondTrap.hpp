/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:47 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string dname);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(DiamondTrap &src);
		~DiamondTrap();
		DiamondTrap&		operator=(DiamondTrap const &rhs);
		void				attack(std::string target){ScavTrap::attack(target);};
		void				whoAmI(void);
		void				setClapName(void);
		std::string	getClapName(void){return (clapName);};
	private:
		std::string		name;
		std::string		clapName;
};

#endif /* ******************************************************** DiamondTrap_H */