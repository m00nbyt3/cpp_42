/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/25 12:22:20 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

//Constructor

HumanA::HumanA(std::string name, Weapon &myWeapon)
	:_Weapon(myWeapon), _name(name)
{
	std::cout << this->_name << " joined the reststance, with a " 
	<< this->_Weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " 
	<< this->_Weapon.getType() << std::endl;
}
