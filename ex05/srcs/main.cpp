/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:38:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/17 16:06:21 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)	{
	Harl	saucisse;
	
	std::cout << "/****************************\\\n"
			  << "|  Welcome in Harl complain  |\n"
			  << "\\****************************/\n" << std::endl;
	
	std::cout << "DEBUG :" << std::endl;
	saucisse.complain("DEBUG");
	std::cout << "INFO :" << std::endl;
	saucisse.complain("INFO");
	std::cout << "WARNING :" << std::endl;
	saucisse.complain("WARNING");
	std::cout << "ERROR :" << std::endl;
	saucisse.complain("ERROR");
	std::cout << "FAIL :" << std::endl;
	saucisse.complain("FAIL");
	
	return 0;
}