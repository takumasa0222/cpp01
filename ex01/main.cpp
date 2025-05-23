/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:12:53 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 16:01:49 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int i;
	i = 7;
	Zombie *zombies;

	zombies = zombieHorde(7, "test");
	for (int j = 0; j < i; j++)
		zombies->announce();
	delete[] zombies;
	return 0;
}
