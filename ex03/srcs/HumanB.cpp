/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:24:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:46:18 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)	{
	_weapon = NULL;

	return;
}

HumanB::HumanB(std::string name)	{
	_name = name;
	_weapon = NULL;

	return;
}

HumanB::~HumanB(void)	{
	
}

void	HumanB::setWeapon(Weapon &weapon)	{
	_weapon = &weapon;

	return;
}

void	HumanB::attack(void) const	{
	if (!_weapon)	{
		std::cout << _name << " attacks with their hands." << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	
	return;
}