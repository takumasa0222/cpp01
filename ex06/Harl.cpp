/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:08:13 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/06 19:32:29 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
void Harl::complain(std::string level)
{
	void (Harl::*funcs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	unsigned int i = 0;
	
	switch (level_to_enum(level))
	{
		case DEBUG:
			i = 0;
			break;
		case INFO:
			i = 1;
			break;
		case WARNING:
			i = 2;
			break;
		case ERROR:
			i = 3;
			break;
		default:
			say_other();
			return;
	}
	for (; i < sizeof(funcs) / sizeof(funcs[0]); i++)
			(this->*funcs[i])();
	
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

void Harl::say_other(void)
{
	std::cout << OTHER_MSG << std::endl;
}

e_levels Harl::level_to_enum(std::string level)
{
	unsigned int i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (; i < sizeof (levels)/sizeof (levels[0]); i++)
	{
		if (level == levels[i])
			return static_cast<e_levels>(i);	
	}
		
	return static_cast<e_levels>(i);
}
