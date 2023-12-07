/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:48:21 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/07 18:56:17 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	randomChump("Zombie_1");
	
	Zombie	*zombie_2 = newZombie("Zombie_2");
	zombie_2->announce();
	delete zombie_2;
	return (0);
}