/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:54:22 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/11 12:28:14 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("First_S");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Second_H");
	randomChump("Third_S");
	delete zombie2;
	return(0);

}