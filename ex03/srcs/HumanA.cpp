/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:17:29 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:51:28 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _weapon(weapon)	{

}

HumanA::~HumanA(void)	{

}

void	HumanA::attack(void) const	{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	
	return;
}

