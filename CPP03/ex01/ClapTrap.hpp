/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:47 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string dname);
		ClapTrap(const ClapTrap& src);
		ClapTrap(ClapTrap& src);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& rhs);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		int			getHitPoints() const {return (hitPoints);};
		int			getEnergyPoints() const {return (energyPoints);}
		std::string	getName() const {return (name);}
		int			getAttackDamage() const {return (attackDamage);}
		void		setHitPoints(int dhp) {this->hitPoints = dhp;};
		void		setEnergyPoints(int denergy) {this->energyPoints = denergy;}
		void		setName(std::string dname) {this->name = dname;}
		void		setAttackDamage(int dattackDamage) {this->attackDamage = dattackDamage;}

	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	protected:
		std::string	type;
		unsigned int	maxHitPoints;
		unsigned int	maxEnergyPoints;
		unsigned int	maxAttackDamage;
};

#endif /* ******************************************************** ClapTrap_H */