/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:04:42 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:19:30 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)	{
	
}

Weapon::Weapon(std::string type)	{
	_type = type;

	return;
}

Weapon::~Weapon(void)	{
	
}

const	std::string &Weapon::getType(void) const	{
	
	return _type;
}

void	Weapon::setType(std::string type)	{
	_type = type;

	return;
}