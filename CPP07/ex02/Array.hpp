/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:03:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/06 14:42:09 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T>
class	Array {
	public:
		Array() {_arr = new T[0]();};
		Array(unsigned int n) {_arr = new T[n](); _size = n;};
		Array& operator=(const Array& rhs) {
			this->_arr = new T[rhs.size()];
			this->_size = rhs.size();
			int i = -1;
			while (rhs.arr[++i])
				this->_arr[i] = rhs._arr[i];
		};
		T& operator[](unsigned int n) {
			if ((n < 0) || (n >= this->size()))
				throw (OutOfRangeException());
			else
				return (_arr[n]);
		};
		Array(const Array& src) {
			this->_arr = new T[src.size()];
			this->_size = src.size();
			int i = -1;
			while (src._arr[++i])
				this->_arr[i] = src._arr[i];
		};
		~Array() {
			delete[] this->_arr;
		};
		unsigned int	size() const {
			return (this->_size);
		};
	protected:
		T*	_arr;
		unsigned int	_size;
	
	class OutOfRangeException : public std::exception
	{
		public:
			virtual const std::string	info() const throw()
			{
				return ("Error: n is out of range!");
			}
	};
};

#endif
