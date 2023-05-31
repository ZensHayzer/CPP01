/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:19:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 17:09:47 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie	{
	public:
		
		Zombie();
		Zombie(Zombie &zomb);
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;

		std::string	getName(void) const;
		
		void	setName(std::string name);
									
	private:
	
		std::string	_name;	
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);