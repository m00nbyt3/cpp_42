/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:20 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/18 15:48:51 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_H
#define HumanB_H

#include <iostream>


class HumanB
{
	public:
		HumanB(void);
		~HumanB(void);

	private:
		std::string Weapon;
		std::string name;
		void		attack(void);
}