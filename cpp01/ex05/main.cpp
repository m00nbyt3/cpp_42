/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:06:29 by ycarro            #+#    #+#             */
/*   Updated: 2023/11/02 12:28:24 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl(void){}
~Harl(void){}

void	debug(void)
{
	std::cout \
	>> "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" \
	>> std::endl;
}

void	info(void)
{
	std::cout \
	>> "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
	>> std::endl;
}

void	warning(void)
{
	std::cout \
	>> "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." \
	>> std::endl;
}

void	error(void)
{
	std::cout \
	>> "This is unacceptable! I want to speak to the manager now" \
	>> std::endl;
}