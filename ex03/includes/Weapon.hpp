/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:20:51 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 14:15:01 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon	{
	
	public:
	
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		const std::string	&getType(void) const;

		void				setType(std::string type);
	
	private:
	
		std::string	_type;
};


#endif