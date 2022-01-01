/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:32:45 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 10:43:57 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed (const int nb);
		Fixed(const float nb);
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &			operator=( Fixed const & rhs );
		void		setRawBits(int const raw);
		int			getRawBits(void) const;
		float		toFloat(void) const;
		int			toInt(void) const;
	private:
		int					_value;
		static const int	_nb_bits = 8;
};

std::ostream &	operator<<(std::ostream &stream, Fixed const &rhs);

#endif /* *********************************************************** FIXED_H */