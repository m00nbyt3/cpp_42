/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:16:26 by ycarro            #+#    #+#             */
/*   Updated: 2023/05/11 14:36:32 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBookClass.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string option;

	system("clear");
	while (true)
	{
		std::cout << "PHONEBOOK" << std::endl << std::endl;
		std::cout << "1. Add a contact" << std::endl;
		std::cout << "2. Search a contact" << std::endl;
		std::cout << "3. Exit" << std::endl << std::endl;
		std::cout << "Select an option (1 - 3): ";
		//std::cin >> option;
		getline(std::cin, option);
		if (option == "1")
			phonebook.add();
		else if (option == "2")
			phonebook.search();
		else if (option == "3")
			break;
		else
		{
			system("clear");
			std::cout << "INVALID OPTION" << std::endl << std::endl;
			continue;
		}
		system("clear");
	}
}