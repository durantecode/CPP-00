/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:33:44 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 12:33:53 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	int			numberContacts;
	PhoneBook	phoneBook;
	std::string input;

	numberContacts = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << std::endl;
			std::cout << "----- Add contact -----" << std::endl;
			phoneBook.addContact(numberContacts);
			std::cout << "----- Contact added -----" << std::endl << std::endl;
			numberContacts++;
			if (numberContacts == 8)
				numberContacts = 0;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << std::endl;
			phoneBook.searchContact();
		}
	}
	return (0);
}
