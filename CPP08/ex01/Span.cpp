#include "Span.hpp"

Span::Span(int	max) {_max = max;};
void	Span::addNumber(int n) {
	if (_v.size() >= _max)
		throw (TooManyValuesException());
	else
		_v.push_back(n);
};
void	Span::addRangeNumber(int min, int max) {
	int	range;
	if (min == max)
		throw (InvalidRange());
	if (((max > 0) && (min > 0)) || ((max < 0) && (min < 0))) {
		range = std::abs(std::abs(max) - std::abs(min));
	}
	else {
		range = std::abs(max) + std::abs(min);
	}
	if (_v.size() + static_cast<size_t>(range) + 1 > _max)
		throw (TooManyValuesException());
	else
	{
		int	n = min;
		while (range >= 0)
		{
			_v.push_back(n);
			range--;
			if (min > max) {n--;} else {n++;}
		}
	}
};
int	Span::shortestSpan(void) {
	if (_v.size() < 2)
		throw (NoSpanPossible());
	else {
		int	span = INT_MAX;
		int	buf;

		for (long i = 0; i < _max; ++i) {
			for (long j = i + 1; j < _max; ++j) {
				int max = _v.at(i);
				int min = _v.at(j);	
				if (((max > 0) && (min > 0)) || ((max < 0) && (min < 0))) {
					buf = std::abs(std::abs(max) - std::abs(min));
				}
				else {
					buf = std::abs(max) + std::abs(min);
				}
				if (buf < span)
					span = buf;
			}
		}
		return (span);
	}
};
int	Span::longestSpan(void) {
	if (_v.size() < 2)
		throw (NoSpanPossible());
	else {
		int max = *(std::max_element(_v.begin(), _v.end()));
		int min = *(std::min_element(_v.begin(), _v.end()));
		if (((max > 0) && (min > 0)) || ((max < 0) && (min < 0))) {
			return (std::abs(std::abs(max) - std::abs(min)));
		}
		else {
			return (std::abs(max) + std::abs(min));
		}
	}
};