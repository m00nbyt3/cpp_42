/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/10/03 14:36:24 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);
		void		attack(void);

	private:
		Weapon &_Weapon;
		std::string _name;
};

#endif