/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:26:15 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/19 14:10:10 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string ogc, std::string filename, std::string ogss, std::string nss)
{
	std::ofstream	nf;

	nf.open(filename + ".replace")
}

int	main(int argc, char **argv)
{
	std::ifstream	ogf; //program input from files operator
	std::string		s;
	char			c;
	
	if (argc != 4)
		return (std::cerr << "Syntax error." << std::endl, 2);
	ogf.open(argv[1]); //opens argv[1] file in ogf operator
	if (!ogf.is_open())
		return (std::cerr << argv[1] << " does not exist." << std::endl, 1);
	while (!ogf.eof() && ogf >> std::noskipws >> c)
		s += c;
	ogf.close();
	replace(s, argv[1], argv[2], argv[3]);
	return (0);
}