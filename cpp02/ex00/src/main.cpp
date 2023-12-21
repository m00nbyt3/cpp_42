/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:32:00 by ycarro            #+#    #+#             */
/*   Updated: 2023/12/15 12:49:06 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPointNumber.hpp"
#include <iostream>

int main( void )
{
	FixedPointNumber a;
	FixedPointNumber b( a );
	FixedPointNumber c;
	c = b;
	b.setFpn(3);
	std::cout << a.getFpn() << b.getFpn() << c.getFpn();
	//std::cout << a;
	//std::cout << a.getRawBits() << std::endl;
	//std::cout << b.getRawBits() << std::endl;
	//std::cout << c.getRawBits() << std::endl;
	return 0;
}