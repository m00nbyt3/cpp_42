/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:02:58 by ycarro            #+#    #+#             */
/*   Updated: 2023/11/14 12:12:09 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ContactClass.hpp"

Contact::Contact(void)
{
	_isEmpty = true;
	_isUsable = true;
	return;
}

Contact::~Contact(void)
{
}

bool		Contact::setInfo(std::string info, std::string type)
{
	if (type == "FirstName")
		this->_FirstName = info;
	if (type == "LastName")
		this->_LastName = info;
	if (type == "Nickname")
		this->_Nickname = info;
	if (type == "PhoneNumber")
		this->_PhoneNumber = info;
	if (type == "DarkestSecret")
		this->_DarkestSecret = info;
	return true;
}

std::string	Contact::getInfo(std::string type) const
{
	if (type == "FirstName")
		return this->_FirstName;
	if (type == "LastName")
		return this->_LastName;
	if (type == "Nickname")
		return this->_Nickname;
	if (type == "PhoneNumber")
		return this->_PhoneNumber;
	if (type == "DarkestSecret")
		return this->_DarkestSecret;
	return(NULL);
}

void	Contact::setNotEmpty()
{
	_isEmpty = false;
}

bool	Contact::getIsEmpty()
{
	return(_isEmpty);
}

void	Contact::setNotUsable()
{
	_isUsable = false;
}

bool	Contact::getIsUsable()
{
	return(_isUsable);
}

void	Contact::setIsUsable()
{
	_isUsable = true;
}