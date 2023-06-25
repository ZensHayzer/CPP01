/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:38:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/25 20:35:44 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)	{
	Harl	saucisse;
	int		level = -1;
	std::string	entry;
	
	std::cout << "/****************************\\\n"
			  << "|  Welcome in Harl complain  |\n"
			  << "\\****************************/\n" << std::endl;
	
	if (argc == 1)	{
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
	}	else if (argc == 2)	{
		entry = argv[1];
		if (entry == "DEBUG")	{
			level = 0;
		} else if (entry == "INFO")	{
			level = 1;
		} else if (entry == "WARNING")	{
			level = 2;
		} else if (entry == "ERROR")	{
			level = 3;
		}
		
		switch (level)
		{
		case 0:
			std::cout << "DEBUG :" << std::endl;
			saucisse.complain("DEBUG");
			std::cout << "INFO :" << std::endl;
			saucisse.complain("INFO");
			std::cout << "WARNING :" << std::endl;
			saucisse.complain("WARNING");
			std::cout << "ERROR :" << std::endl;
			saucisse.complain("ERROR");
			break;
		case 1:
			std::cout << "INFO :" << std::endl;
			saucisse.complain("INFO");
			std::cout << "WARNING :" << std::endl;
			saucisse.complain("WARNING");
			std::cout << "ERROR :" << std::endl;
			saucisse.complain("ERROR");
			break;
		case 2:
			std::cout << "WARNING :" << std::endl;
			saucisse.complain("WARNING");
			std::cout << "ERROR :" << std::endl;
			saucisse.complain("ERROR");
			break;
		case 3:
			std::cout << "ERROR :" << std::endl;
			saucisse.complain("ERROR");
			break;
		default:
			std::cout << " Probably complaining about insignificant problems." << std::endl;
			break;
		}
	}	else	{
		std::cout << "Need 1 or less argument." << std::endl;
	}
	
	return 0;
}