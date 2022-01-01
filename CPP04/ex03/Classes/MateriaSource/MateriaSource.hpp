/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/08 14:49:01 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../IMateriaSource/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria**	_buf;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource(MateriaSource& src);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* cpy);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif /* ******************************************************** MATERIASOURCE_HPP */