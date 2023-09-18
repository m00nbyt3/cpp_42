/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/18 13:07:29 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie(void);

	void	announce(void);
	void	setName(std::string Name);

private:
	std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif