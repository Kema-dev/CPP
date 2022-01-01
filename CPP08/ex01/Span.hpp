#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <limits.h>

class InvalidRange : public std::exception
{
	public:
		virtual const std::string	info() const throw()
		{
			return ("Error: Specified range is invalid!");
		}
};

class TooManyValuesException : public std::exception
{
	public:
		virtual const std::string	info() const throw()
		{
			return ("Error: Your class is full!");
		}
};

class NoSpanPossible : public std::exception
{
	public:
		virtual const std::string	info() const throw()
		{
			return ("Error: Impossible to get a span!");
		}
};

class Span
{
	public:
		Span(int	max);
		void	addNumber(int n);
		void	addRangeNumber(int min, int max);
		int	shortestSpan(void);
		int	longestSpan(void);
		std::vector<int>	_v;
	private:
		unsigned int		_max;
};

#endif
