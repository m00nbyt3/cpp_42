/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:20:31 by ycarro            #+#    #+#             */
/*   Updated: 2023/05/11 14:28:54 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
public:
	Contact();
	~Contact();

	bool		setInfo(std::string info, std::string type);
	std::string	getInfo(std::string type) const;

	bool		setPhone();
	std::string	getPhone() const;
	bool		getIsEmpty();
	void		setIsEmpty();

private:

	std::string		_FirstName;
	std::string		_LastName;
	std::string		_Nickname;
	std::string		_PhoneNumber;
	std::string		_DarkestSecret;
	bool			_isEmpty;
};

#endif