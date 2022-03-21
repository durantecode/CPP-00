/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:33:44 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/21 22:51:37 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	public:
	std::string	name;
	std::string	lastName;
	std::string	nickName;
	std::string	darkestSecret;
	std::string	phone;
};

int main(void)
{
	Contact contact;

	contact.name = "Luis";
	contact.lastName = "Durante";
	contact.nickName = "Dursito";
	contact.phone = "625132055";
	contact.darkestSecret = "I like pineapple pizza";
	return (0);
}