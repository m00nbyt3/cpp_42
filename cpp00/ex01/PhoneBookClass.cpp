/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:41:10 by ycarro            #+#    #+#             */
/*   Updated: 2023/05/23 12:14:49 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <cstdio>
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
	//_contacts[0] = 0;
	//memset(_contacts, 0, sizeof(_contacts));
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

	//Clear screen
	system("clear");

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

	//Clear screen
	system("clear");
	std::cout << "Contact added succesfully!" << std::endl << std::endl;
}

void	PhoneBook::search()
{
	int	i;
	std::string option;
	int o;

	system("clear");
	std::cout << "Contact list:" << std::endl << std::endl;
	i = 0;
	while(i < 8 && !_contacts[i].getIsEmpty())
	{
		std::cout << std::right << std::setw(10) << i+1 
		<< "|"
		<< std::setw(10) << (_contacts[i].getInfo("FirstName").length() > 10 ? (_contacts[i].getInfo("FirstName").substr(0, 9) + '.') : _contacts[i].getInfo("FirstName"))
		<< "|"
		<< std::setw(10)<< (_contacts[i].getInfo("LastName").length() > 10 ? (_contacts[i].getInfo("LastName").substr(0, 9) + '.') : _contacts[i].getInfo("LastName"))
		<< "|"
		<< std::setw(10)<< (_contacts[i].getInfo("Nickname").length() > 10 ? (_contacts[i].getInfo("Nickname").substr(0, 9) + '.') : _contacts[i].getInfo("Nickname"))
		<< std::endl;
		i++;
	}
	std::cout << std::endl << "Select an option: ";
	getline(std::cin, option);
	std::istringstream(option) >> o;
	if (o < 1 || o > i+1)
		std::cout << "INVALID OPTION" << std::endl <<std::endl;
	else
	{
		o--;
		system("clear");
		std::cout << "Getting " << _contacts[o].getInfo("FirstName") << "'s info:" << std::endl << std::endl <<
		"Phone Number: " << _contacts[o].getInfo("PhoneNumber") << std::endl << std::endl << std::endl;
	}
	getchar();
	system("clear");
}