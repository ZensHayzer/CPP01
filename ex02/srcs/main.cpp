/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:19:52 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 19:32:12 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)	{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << &brain << std::endl
		<< stringPTR << std::endl
		<< &stringREF << std::endl;
		
	std::cout << brain << std::endl
		<< *stringPTR << std::endl
		<< stringREF << std::endl;
		
	return 0;
}