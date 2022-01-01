/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../ICharacter/ICharacter.hpp"

class AMateria;

class IMateriaSource
{
	public:
		IMateriaSource() {};
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria* cpy) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif /* ******************************************************** IMATERIASOURCE_HPP */