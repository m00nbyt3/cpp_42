/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:16:26 by ycarro            #+#    #+#             */
/*   Updated: 2023/11/14 11:36:07 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBookClass.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string option;

	system("clear");
	while (true)
	{
		std::cout << "PHONEBOOK" << std::endl << std::endl;
		std::cout << "ADD: Add a contact" << std::endl;
		std::cout << "SEARCH: Search a contact" << std::endl;
		std::cout << "EXIT: Exit" << std::endl << std::endl;
		std::cout << "Select an option: ";
		getline(std::cin, option);
		if (option == "ADD" || option == "add")
			phonebook.add();
		else if (option == "SEARCH" || option == "search")
			phonebook.search();
		else if (option == "EXIT" || option == "exit")
			break;
		else
		{
			system("clear");
			std::cout << "INVALID OPTION" << std::endl << std::endl;
			continue;
		}
	}
}