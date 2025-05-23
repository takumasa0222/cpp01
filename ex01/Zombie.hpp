/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:05:05 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 15:54:34 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void set_name(std::string name);
		
	private:
		std::string name;
	
};

Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name);

#endif