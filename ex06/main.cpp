/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:25:48 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/06 19:37:28 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main (int argc, char *argv[])
{
	Harl harl;
	std::string msg;
	if (argc != 2)
	{
		std::cerr << "Argument number should be 1" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
