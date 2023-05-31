/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:10:54 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 18:12:20 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)	{
	std::string	answer;
	Zombie *zomb;
	
	std::cout << "/*****************************\\" << std::endl
		<< "|  Welcome in Zombie Factory  |" << std::endl
		<< "\\_____________________________/\n" << std::endl;

	std::cout << "Make your own undead puppy, enter a name : ";
	getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return (0);		
	}
	zomb = newZombie(answer);
	std::cout << "OMG a copy appear ! Look, he's so happy !" << std::endl;
	if (answer.empty())
		answer = "Fabrife";
	randomChump(answer);
	delete zomb;

	return 0;
}