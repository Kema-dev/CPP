/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:29:52 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../AMateria/AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& src);
		Cure(Cure& src);
		virtual ~Cure() {};
		virtual AMateria*	clone(void) const;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** CURE_HPP */