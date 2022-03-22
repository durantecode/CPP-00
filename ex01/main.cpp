/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:33:44 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/22 03:21:27 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>


class Contact
{
	private:
	std::string	name;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	darkestSecret;

	public:
	void Add()
	{
		std::cout << "Name: ";
		std::getline(std::cin, name);
		std::cout << "Last Name: ";
		std::getline(std::cin, lastName);
		std::cout << "Nickname: ";
		std::getline(std::cin, nickName);
		std::cout << "Phone: ";
		std::getline(std::cin, phone);
		std::cout << "Your darkest secret: ";
		std::getline(std::cin, darkestSecret);
	}

	std::string getName()
	{
		return name;
	}
	std::string getLastname()
	{
		return lastName;
	}
	std::string getNickname()
	{
		return nickName;
	}

	void getInfo()
	{
		std::cout << name << std::endl;
		std::cout << lastName << std::endl;
		std::cout << nickName << std::endl;
		std::cout << phone << std::endl;
		std::cout << darkestSecret << std::endl;
	}
};

class PhoneBook
{
	private:
	int		selectedContact;
	Contact contactList[8];

	public:
	void addContact(int numberContact)
	{
		contactList[numberContact].Add();
	}

	void searchContact()
	{
		std::cout << std::setw(13) << "index | ";
		std::cout << std::setw(13) << "First Name | ";
		std::cout << std::setw(13) << "Last Name | ";
		std::cout << std::setw(13) << "Nick Name | ";
		std::cout << std::endl;
		for (int i = 0; i < 8; i++)
		{
			std::cout << std::setw(10) << i + 1;
			std::cout << std::setw(10) << contactList[i].getName();
			std::cout << std::setw(10) << contactList[i].getLastname();
			std::cout << std::setw(10) << contactList[i].getNickname();
			std::cout << std::endl;
		}
		std::cout << "Select a contact from the list: ";
		std::cin >> selectedContact;

		// std::getline(std::cin, selectedContact);
		contactList[selectedContact].getInfo();
	}
};


int main(void)
{
	int			numberContacts;
	PhoneBook	phoneBook;
	std::string input;

	numberContacts = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "Welcome to Phone Book, choose an option (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << std::endl << "----- Add contact -----" << std::endl;
			phoneBook.addContact(numberContacts);
			std::cout << "----- Contact added succesfully -----" << std::endl << std::endl;
			numberContacts++;
			if (numberContacts == 7)
				numberContacts = 0;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "----- Search in Phonebook -----" << std::endl;
			phoneBook.searchContact();
		}
	}
	return (0);
}