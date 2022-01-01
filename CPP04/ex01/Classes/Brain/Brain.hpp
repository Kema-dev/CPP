/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/05 09:50:30 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cmath>

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		Brain(Brain& src);
		~Brain();
		Brain&	operator=(const Brain& rhs);
		std::string		getIdea(int i);
		void			setIdea(int i, std::string str);
		void			displayIdeas();
	protected:
		std::string		_ideas[100];
};

#endif /* ******************************************************** BRAIN_HPP */