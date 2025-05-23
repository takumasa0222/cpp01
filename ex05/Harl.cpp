/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:08:13 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 23:37:11 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
void Harl::complain(std::string level)
{
	void (Harl::*funcs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (unsigned int i = 0; i < sizeof(funcs) / sizeof(funcs[0]); i++)
	{
		if (!levels[i].compare(level))
		{
			(this->*funcs[i])();
			break;
		}
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;	
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << WARN_MSG << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}
