/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:55:20 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 17:29:04 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char **argv)	{
	std::fstream 	fs, out;
	std::string		buf, str1, str2;
	std::string		&tmp = buf;
	size_t			found = 0;

	if (argc != 4)	{
		std::cout << "Program need 3 args : <filename> , <string to find> , <replacing string>." << std::endl;
		return 0;
	}
	fs.open(argv[1], std::ios::in);
	if (!fs.is_open())	{
		std::cout << "Fail to open file." << std::endl;
		return 0;
	}
	out.open((std::string(argv[1]) + ".replace").c_str(), std::ios::out);
	str1 = argv[2];
	str2 = argv[3];
	if (!out.is_open())	{
		std::cout << "Fail to open file." << std::endl;
		return 0;
	}
	while (std::getline(fs, buf))	{
		found = 0;
		while ((found = tmp.find(str1, found)) != std::string::npos)	{
			tmp.erase(found, str1.size());
			tmp.insert(found, str2);
			found += str2.size();
		}
		out << buf;
		if (!fs.eof())
			out << std::endl;
	}
	fs.close();
	out.close();
	return 0;
}