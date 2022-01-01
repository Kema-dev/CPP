/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:32:45 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 10:44:21 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _value(nb << _nb_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _nb_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &rhs)
{
    stream << rhs.toFloat();
    return stream;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

float	Fixed::toFloat(void) const
{
	return (((float)(_value / (float)(1 << _nb_bits))));
}

int		Fixed::toInt(void) const
{
	return (_value >> _nb_bits);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */