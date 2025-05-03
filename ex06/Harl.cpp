/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:08:13 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 23:47:25 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
void Harl::complain(std::string level)
{
	void (Harl::*funcs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//switch (level)
	//{
	//	case "DEBUG":
	//		;
	//		break;
	//	case "INFO":
	//		last_name = input;
	//		break;
	//	case "WARNING":
	//		nick_name = input;
	//		break;
	//	case "ERROR":
	//		phone_num = input;
	//		break;
	//	default:
	//		return ;
	//}
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
