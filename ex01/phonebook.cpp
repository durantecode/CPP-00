/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:41:34 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/22 22:33:16 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::addContact(int numberContact)
{
	contactList[numberContact].Add();
}

void PhoneBook::searchContact()
{
	int			selectedContact;
	Table		table;
	std::string	in;
	table.printTable(contactList);
	std::cout << "Select a contact from the list: ";
	std::getline(std::cin, in);
	std::stringstream(in) >> selectedContact;
	table.printContact(contactList, selectedContact);
}
