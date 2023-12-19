/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:26:15 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/19 14:46:16 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(std::string ogc, std::string filename, std::string ogss, std::string nss)
{
	std::ofstream	nf;
	int				x = -1;

	nf.open((filename + ".replace").c_str());
	if (!nf.is_open())
		return (std::cerr << filename << ".replace creation error." << std::endl, 1);
	for (int i = 0; i < (int)ogc.size(); i++)
	{
		if (x < i)
			x = ogc.find(ogss, i);
		if (x != i)
			nf << ogc[i];
		else
		{
			nf << nss;
			i += ogss.size() - 1;
		}
	}
	nf.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	ogf; //program input from files operator
	std::string		s;
	char			c;
	
	if (argc != 4 || argv[2][0] == '\0')
		return (std::cerr << "Syntax error." << std::endl, 2);
	ogf.open(argv[1]); //opens argv[1] file in ogf operator
	if (!ogf.is_open())
		return (std::cerr << argv[1] << " does not exist." << std::endl, 1);
	while (!ogf.eof() && ogf >> std::noskipws >> c)
		s += c;
	ogf.close();
	return (replace(s, argv[1], argv[2], argv[3]));
}