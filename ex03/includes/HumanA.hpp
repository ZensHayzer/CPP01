/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:24:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:49:42 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA	{

	public:
	
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void) const;
	
	private:

		std::string	_name;
		Weapon		&_weapon;
};

#endif