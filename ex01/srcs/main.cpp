/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:10:54 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 19:14:24 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)	{
	std::string	answer;
	std::string	answer1;
	int			Nzomb;
	Zombie 		*zomb;
	
	std::cout << "/*****************************\\" << std::endl
		<< "|  Welcome in Zombie Factory  |" << std::endl
		<< "\\_____________________________/\n" << std::endl;

	std::cout << "Craft your own undead puppy, enter a name : ";
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
	std::cout << "Damit ! We lost the orignal one, BUT " << answer << "'s copy's stay.\n"
		<< "We are gonna create an ARMY, chose how many " << answer << " you want : ";
	getline(std::cin, answer1);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return (0);		
	}
	while (answer1.find_first_not_of("0123456789") != std::string::npos || answer1.empty())
	{
		std::cout << "Please, do an effort, this is not a number, let's try again : ";
		getline(std::cin, answer1);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return (0);		
		}
	}
	std::istringstream(answer1) >> Nzomb;
	if (Nzomb < 0)	{
		std::cout << "Can't handle negative things, please, always stay positive, bye." << std::endl;
	}
	else if	(Nzomb > 1798)	{
		std::cout << "You were too greedy, the planet can't handle that tons of " << answer << ", bye." << std::endl;
	}
	zomb = zombieHorde(Nzomb, answer);
	for (int i = 0; i < Nzomb; i++)	{
		zomb[i].announce();
	}
	delete [] zomb;
	
	return 0;
}