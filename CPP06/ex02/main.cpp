/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:03:32 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/06 13:25:59 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

class	Base {
	public:
		virtual	~Base() {};
};

class	A : public Base {
};

class	B : public Base {
};

class	C : public Base {
};

Base*	generate(void) {
	srand((unsigned int)time(NULL));
	int	num = rand() % 3;
	switch (num) {
		case 0:
		{
			std::cout << "Created a A" << std::endl;
			return (new A());
		}
		case 1:
		{
			std::cout << "Created a B" << std::endl;
			return (new B());
		}
		case 2:
		{
			std::cout << "Created a C" << std::endl;
			return (new C());
		}
	}
	return (NULL);
}

void	identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A";
	}
	else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B";
	}
	else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C";
	}
}

void	identify_from_reference(Base& p) {
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
		return ;
	}
	catch (std::bad_cast) {}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
		return ;
	}
	catch (std::bad_cast) {}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
		return ;
	}
	catch (std::bad_cast) {}
}

int main(void) {
	Base*	buf = generate();
	Base&	ref = *buf;
	std::cout << "From pointer: ";
	identify_from_pointer(buf);
	std::cout << std::endl;
	std::cout << "From reference: ";
	identify_from_reference(ref);
	std::cout << std::endl;
	return 0;
}
