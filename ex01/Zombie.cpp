/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:15:30 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 15:55:52 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "deleted zombie: " << name << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}