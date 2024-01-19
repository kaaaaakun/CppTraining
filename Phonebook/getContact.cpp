/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <tokazaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:12:07 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 03:09:44 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	printInfo(std::string str)
{
	std::size_t len;

	len = str.size();
	std::cout << "|";
	if (10 < len)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::displayOneContact(Contact *contact)
{
	std::cout << "firstName   | " << contact->firstName << std::endl;
	std::cout << "lastName    | " << contact->lastName << std::endl;
	std::cout << "nickName    | " << contact->nickName << std::endl;
	std::cout << "phoneNumber | " << contact->phoneNumber << std::endl;
}

void	Contact::displayLineContact(Contact *contact)
{
	printInfo(contact->firstName);
	printInfo(contact->lastName);
	printInfo(contact->nickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayContactLabel(void)
{
	std::cout << "  ";
	printInfo("FirstName");
	printInfo("LastName");
	printInfo("NickName");
	std::cout << "|" << std::endl;
}
