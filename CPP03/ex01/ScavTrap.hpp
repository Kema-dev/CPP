/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:47 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/05 00:35:04 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string dname);
		ScavTrap(const ScavTrap &src);
		ScavTrap(ScavTrap &src);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const &rhs);
		void		guardGate(void);
};

#endif /* ******************************************************** ScavTRAP_H */