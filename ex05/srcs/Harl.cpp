/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:19:09 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/17 16:34:54 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)	{

}

Harl::~Harl(void)	{

}

void	Harl::setIndex(void)	{
	_index[0] = "DEBUG";
	_index[1] = "INFO";
	_index[2] = "WARNING";
	_index[3] = "ERROR";
}

void	Harl::setLvltb(void)	{
	_lvltb[0] =  &Harl::_debug;
	_lvltb[1] =  &Harl::_info;
	_lvltb[2] =  &Harl::_warning;
	_lvltb[3] =  &Harl::_error;

}

void	Harl::complain(std::string level)	{
	int	i = 0;
	
	setIndex();
	setLvltb();
	for (i = 0; i < 4; i++)	{
		if (_index[i] == level)
			break;
	}
	if (i == 4)	{
		std::cout << "Wrong entry, please choose one of : DEBUG / INFO / WARNING / ERROR." << std::endl;
		return;
	}
	else	{
		(*this.*_lvltb[i])();
	}

	return;
}

void	Harl::_debug(void)	{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;

	return;
}

void	Harl::_info(void)	{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

	return;
}

void	Harl::_warning(void)	{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

	return;
}

void	Harl::_error(void)	{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;

	return;
}