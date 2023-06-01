/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:23:52 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:45:33 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB	{

	public:
	
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon &weapon);

		void	attack(void) const;


	private:

		std::string	_name;
		Weapon		*_weapon;
};

#endif