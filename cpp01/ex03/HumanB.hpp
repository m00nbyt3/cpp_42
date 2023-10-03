/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/10/03 15:19:48 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_H
#define HumanB_H

#include <iostream>
#include "Weapon.hpp"


class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		attack(void);
		void		setWeapon(Weapon &weapon);

	private:
		Weapon *_Weapon;
		std::string _name;
};

#endif