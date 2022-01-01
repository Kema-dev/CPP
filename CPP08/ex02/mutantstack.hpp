#ifndef STACK_HPP
#define STACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) {
			return std::stack<T>::c.begin();
		};
		iterator end(void) {
			return std::stack<T>::c.end();
		};
};

#endif