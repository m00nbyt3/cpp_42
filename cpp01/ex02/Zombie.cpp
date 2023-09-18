/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/18 13:07:06 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor
Zombie::Zombie()
{
}


//Destructor
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}


//Public methods
void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string Name)
{
	this->_name = Name;
}