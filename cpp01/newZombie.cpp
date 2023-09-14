/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:02:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/11 12:26:44 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Smart zombie

Zombie *newZombie(std::string name)
{
	Zombie *heap_zombie = new Zombie(name);
	heap_zombie->announce();
	return(heap_zombie);
}