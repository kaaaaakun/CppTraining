/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:50:30 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 03:11:07 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof()) {
			std::cout << CTL_D_ERROR_MSG << std::endl;
			std::exit(EXIT_FAILURE);
		}
        if (command == "ADD")
			phonebook.addContact();
        else if (command == "SEARCH") {
            phonebook.displayPhoneBook();
        }
        else if (command == "EXIT") {
			std::cout << "EXIT" << std::endl;
            break ;
		}
    }
}
