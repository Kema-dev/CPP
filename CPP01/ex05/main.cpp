/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:53:21 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 20:48:49 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	self;

	self = Karen();
	self.complain("debug");
	self.complain("info");
	self.complain("warning");
	self.complain("error");
	self.complain("none");
	return (0);
}