/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:02:36 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/06 12:32:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (numbers[i] != 0)
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	Array<int> copy = numbers;
	Array<int> copy2(numbers);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		if (mirror[i] != copy[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		if (mirror[i] != copy2[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " numbers[-2] invalid" << std::endl;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " numbers[MAX_VAL] invalid" << std::endl;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        mirror[i] += 1;
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] - 1 != numbers[i])
        {
            std::cerr << "The copy is not deep !" << std::endl;
            return 1;
        }
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] - 1 != copy[i])
        {
            std::cerr << "The copy is not deep !" << std::endl;
            return 1;
        }
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] - 1 != copy2[i])
        {
            std::cerr << "The copy is not deep !" << std::endl;
            return 1;
        }
    }
	if (numbers.size() != MAX_VAL)
	{
		{
            std::cerr << "Size is not correct !" << std::endl;
            return 1;
        }
	}
	if (copy.size() != MAX_VAL)
	{
		{
            std::cerr << "Size is not correct !" << std::endl;
            return 1;
        }
	}
	if (copy2.size() != MAX_VAL)
	{
		{
            std::cerr << "Size is not correct !" << std::endl;
            return 1;
        }
	}
    delete [] mirror;
    return 0;
}
