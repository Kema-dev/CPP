/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:47 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/05 00:44:24 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string dname);
		FragTrap(const FragTrap &src);
		FragTrap(FragTrap &src);
		~FragTrap();
		FragTrap &	operator=(FragTrap const &rhs);
		void		highFiveGuys(void);
};

#endif /* ******************************************************** FRAGTRAP_H */