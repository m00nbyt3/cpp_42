/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:40:55 by ycarro            #+#    #+#             */
/*   Updated: 2023/05/11 12:28:09 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "ContactClass.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	init();
	void	add();
	void	search();
	void	exit();

private:

	Contact _contacts[8];

};

#endif