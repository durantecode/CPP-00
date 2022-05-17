/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:31:19 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 12:33:46 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_HPP
# define TABLE_HPP

#include "contact.hpp"

class Table
{
	private:
	std::string truncateContact(std::string truncate);

	public:
	void	printTable(Contact contactList[8]);
	void	printContact(Contact contactList[8], int selectedContact);
};

#endif
