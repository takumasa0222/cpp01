/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:30:00 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 19:40:54 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
		const Weapon *getWeapon() const;
	private:
		std::string name;
		Weapon *weapon;
};

#endif