/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:02:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/11 12:24:20 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Dumb zombie

void randomChump(std::string name)
{
	Zombie stack_zombie(name);
	stack_zombie.announce();
}