/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:36:34 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 22:21:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif
