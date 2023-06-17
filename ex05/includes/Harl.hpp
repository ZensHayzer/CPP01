/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:19:16 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/17 16:40:49 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl	{
	
	typedef void (Harl::* level)(void);
	
	public:
		
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
		
		void	setIndex(void);
		void	setLvltb(void);
		
	private:
		
		std::string	_index[4]; 
		level		_lvltb[4];
		
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif