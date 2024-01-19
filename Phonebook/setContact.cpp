/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:10:03 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 03:10:06 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static bool	ft_isascii(int c) {
	if ('a' <= c && c <= 'z')
		return (true);
	else if ('A' <= c && c <= 'Z')
		return (true);
	else if ('0' <= c && c <= '9')
		return (true);
	else
		return (false);
}

static bool isAsciiOrNumeric(const std::string& str, bool num)
{
	size_t i = 0;

	for (;i < str.length(); i++) {
		if (!ft_isascii(str[i]) && num == ASCII) {
			return (false);
		}
		if (!std::isdigit(str[i]) && num == DIGIT) {
			return (false);
		}
		if (15 < i) {
			return (false);
		}
	}
	if (i == 0)
		return (false);
	return (true);
}

void	Contact::setData(std::string *str, std::string msg, bool num)
{
	std::string input;

	while (1)
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << CTL_D_ERROR_MSG << std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (isAsciiOrNumeric(input, num) == true) {
			*str = input;
			break ;
		}
        std::cout << "Invalid input. Please enter a correct ";
	}
}

void	Contact::addNewContact(Contact *contact)
{
	Contact::setData(&contact->firstName, "firstname :", ASCII);
	Contact::setData(&contact->lastName, "lastname :", ASCII);
	Contact::setData(&contact->nickName, "nickname :", ASCII);
	Contact::setData(&contact->phoneNumber, "phonenumber :", DIGIT);
	Contact::setData(&contact->darkestSecret, "darkest secret :", ASCII);
}
