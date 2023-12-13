/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:49:16 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/13 15:40:14 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " :  BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->name = name;
}