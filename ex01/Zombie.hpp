/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:05:05 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/01 02:44:38 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();


		void announce(void);
		
	private:
		std::string name;
	
};

Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name);

#endif