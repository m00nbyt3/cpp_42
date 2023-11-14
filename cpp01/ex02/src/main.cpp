/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:51:01 by ycarro            #+#    #+#             */
/*   Updated: 2023/09/21 11:02:47 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	//Variables
	std::string brain = "HI THIS IS A BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	//Addresses
	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;;

	//Pointed values
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);

}