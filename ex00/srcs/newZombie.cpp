/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:43:54 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 17:57:01 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)	{
	Zombie	*zomb;
	if (name.empty())
		zomb = new Zombie();
	else
		zomb = new Zombie(name);
	
	return zomb;
}