/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:43:39 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <cmath>
class AMateria;
# include "../ICharacter/ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
		AMateria**	_buf;
	public:
		AMateria() {};
		AMateria(std::string const & type) {_type = type;};
		virtual ~AMateria() {};
		AMateria&	operator=(const AMateria& rhs);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif /* ******************************************************** AMATERIA_HPP */