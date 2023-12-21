/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPointNumber.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:05:05 by ycarro            #+#    #+#             */
/*   Updated: 2023/12/15 12:49:33 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class FixedPointNumber
{
public:
	FixedPointNumber(); //Constructor
	~FixedPointNumber(); //Destructor
	FixedPointNumber(const FixedPointNumber& copy); //Copy constructor
	FixedPointNumber& operator=(const FixedPointNumber& copy); //Copy assignment
	int getFpn(void);
	void setFpn(int value);

private:
	int	_Fpn;
	//static constant int _FractionBits = 8;
};