/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:39:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 12:34:26 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::Add()
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

void Contact::getInfo(int index)
{
	std::cout << std::endl << std::setw(10) << "Contact: " << index << std::endl;
	std::cout << std::setw(10) << "Name: " << name << std::endl;
	std::cout << std::setw(10) << "Lastname: " << lastName << std::endl;
	std::cout << std::setw(10) << "Nickname: " << nickName << std::endl;
	std::cout << std::setw(10) << "Phone: " << phone << std::endl;
	std::cout << std::setw(10) << "Secret: " << darkestSecret << std::endl << std::endl;
}
