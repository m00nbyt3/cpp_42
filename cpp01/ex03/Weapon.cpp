/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/25 12:31:03 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &_type)
{
	this->setType(_type);
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(const std::string &_type)
{
	this->_type = _type;
}

const std::string	Weapon::getType(void)
{
	return(_type);
}