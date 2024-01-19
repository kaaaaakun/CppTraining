/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokazaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:00:14 by tokazaki          #+#    #+#             */
/*   Updated: 2023/12/02 00:45:04 by tokazaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define  CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

# define CTL_D_ERROR_MSG "\nClosed standard input and terminated the program."
# define ASCII true
# define DIGIT false


class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

	void	setData(std::string *str, std::string msg, bool num);

public:
	void	addNewContact(Contact *contact);
	void	displayOneContact(Contact *contact);
	void	displayLineContact(Contact *contact);
	void	displayContactLabel(void);
};
	
#endif
