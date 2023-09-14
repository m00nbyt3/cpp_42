/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:19 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/11 12:24:01 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);

private:
	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif