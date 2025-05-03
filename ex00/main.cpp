/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:12:53 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/01 02:42:09 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *heap_zombie;

	randomChump("stack_zombie");
	heap_zombie = newZombie("heap_zombie");
	heap_zombie->announce();
	delete heap_zombie;
	return 0;
}
