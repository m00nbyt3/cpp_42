/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/11 12:23:58 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created" << std::endl;
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