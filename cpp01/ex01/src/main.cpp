/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:54:22 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/18 12:59:23 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 6;
	Zombie *myHorde = zombieHorde(N, "Pip");
	for(int i = 0; i < N; i++)
	{
		myHorde[i].announce();
	}
	delete[] myHorde;
	return(0);
}