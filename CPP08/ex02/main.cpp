/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:10:00 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/13 10:51:29 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of 5/17 : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of 5 : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << "stack[" << i << "] : " << *it << std::endl;
		++it;
		i++;
	}
	std::stack<int> s(mstack);
	return 0;
}
