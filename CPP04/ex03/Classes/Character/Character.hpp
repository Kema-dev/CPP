/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:40:58 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/08 14:39:12 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../ICharacter/ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		AMateria	**_item;
		std::string	_name;
	public:
		Character();
		Character(const Character& src);
		Character(Character& src);
		Character(std::string dname);
		virtual ~Character();
		Character&	operator=(const Character& rhs);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif /* ******************************************************** CHARACTER_HPP */