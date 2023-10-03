/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/10/03 15:21:15 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

//Constructor

HumanB::HumanB(std::string name)
	:_Weapon(0), _name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " 
	<< this->_Weapon->getType() << std::endl;
}
