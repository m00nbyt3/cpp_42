/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPointNumber.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:15:28 by ycarro            #+#    #+#             */
/*   Updated: 2023/12/19 14:26:56 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPointNumber.hpp"

FixedPointNumber::FixedPointNumber()
	: _Fpn(0) {}

FixedPointNumber::~FixedPointNumber()
{}

FixedPointNumber& FixedPointNumber::operator=(const FixedPointNumber& other)
{	
	if (this != &other)
	{
		_Fpn = other._Fpn;
	}
	return *this;
}

FixedPointNumber::FixedPointNumber(const FixedPointNumber& other)
{
	*this = other;
}

int FixedPointNumber::getFpn()
{
	return(_Fpn);
}

void FixedPointNumber::setFpn(int value)
{
	_Fpn = value;
}