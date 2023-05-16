/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:41:10 by ycarro            #+#    #+#             */
/*   Updated: 2023/05/11 14:36:22 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook created" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook closed" << std::endl;
}

void	PhoneBook::init(void)
{
	memset(_contacts, 0, sizeof(_contacts));
}

void	PhoneBook::add(void)
{
	Contact NewContact;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	int	i;

	//Get first name
	std::cout << "Input the First Name: ";
	getline(std::cin, FirstName);
	NewContact.setInfo(FirstName, "FirstName");

	//Get last Name
	std::cout << "Input the Last Name: ";
	getline(std::cin, LastName);
	NewContact.setInfo(LastName, "LastName");

	//Get nickname
	std::cout << "Input the Nickname: ";
	getline(std::cin, Nickname);
	NewContact.setInfo(Nickname, "Nickname");

	//Get phone number
	std::cout << "Input the Phone Number: ";
	getline(std::cin, PhoneNumber);
	NewContact.setInfo(PhoneNumber, "PhoneNumber");

	//Get darkest secret
	std::cout << "Input the Darkest Secret: ";
	getline(std::cin, DarkestSecret);
	NewContact.setInfo(DarkestSecret, "DarkestSecret");

	//Save the contact in a free space
	i = 0;
	while (i < 8 && !_contacts[i].getIsEmpty())
		i++;
	_contacts[i] = NewContact;
	_contacts[i].setIsEmpty();
}

void	PhoneBook::search()
{
	int	i;

	i = 0;
	while(i < 8)
	{
		std::cout << i;
		std::cout << "    ";
		std::cout << _contacts[i].getInfo("FirstName") << std::endl;
		std::cout << "    ";
		std::cout << _contacts[i].getInfo("LastName") << std::endl;
		std::cout << "    ";
		std::cout << _contacts[i].getInfo("Nickname") << std::endl;
		i++;
	}
}