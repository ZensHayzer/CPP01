/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:25:42 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 18:01:59 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)	{
	_name = "Fabrife";
	std::cout << "No idea ? Okay, no problem, we'll chose for you, " << _name << " is now \"alive\" !" << std::endl;
}

Zombie::Zombie(Zombie &zomb)	{
	_name = zomb._name;
}

Zombie::Zombie(std::string name)	{
	setName(name);
	std::cout << "Owh, what a beautiful name, " << _name << " is now \"alive\" !" << std::endl;
}

Zombie::~Zombie(void)	{
	std::cout << this->_name << " died (again)." << std::endl;
}

std::string	Zombie::getName(void) const	{
	return _name;
}

void	Zombie::setName(std::string name)	{
	_name = name;

	return;
}

void	Zombie::announce(void) const	{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
