/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:05:49 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 18:48:41 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)	{
	Zombie	*zombs = new Zombie[N];
	
	for (int i = 0; i < N; i++)	{
		zombs[i].setName(name);
	}

	return zombs;
}