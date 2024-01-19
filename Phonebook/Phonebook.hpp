/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:18:39 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/03 03:10:47 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

const int MAX_CONTACTS = 8;

class PhoneBook {
private:
	Contact contact[MAX_CONTACTS];
	int		addCount;

public:
	PhoneBook();
    void    addContact(void);
    void    displayPhoneBook(void);
	void	displayOneContactInfo(int displayCount);
	void	displayAllContact(int displayCount);
};

#endif
