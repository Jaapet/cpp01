/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:19:52 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/13 18:28:19 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL){}

HumanB::~HumanB(){}

void	HumanB::attack(void)
{
	std::cout << this->name;
	if (this->weapon)
		std::cout << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << " does nothing. " << this->name << " is nothing but useless as fuck. Little piece of shit." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
