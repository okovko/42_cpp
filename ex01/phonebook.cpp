/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 19:55:17 by olkovale          #+#    #+#             */
/*   Updated: 2018/01/09 19:55:17 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include <iostream>
#include <iomanip>

#include "phonebook.hpp"

phonebook::phonebook() {}

void			phonebook::add(void)
{
	phonebook_entry		entry;

	std::cout << "first_name: ";
	getline(std::cin, entry.first_name);
	std::cout << "last_name: ";
	getline(std::cin, entry.last_name);
	std::cout << "nick: ";
	getline(std::cin, entry.nick);
	std::cout << "login: ";
	getline(std::cin, entry.login);
	std::cout << "postal: ";
	getline(std::cin, entry.postal);
	std::cout << "email: ";
	getline(std::cin, entry.email);
	std::cout << "phone: ";
	getline(std::cin, entry.phone);
	std::cout << "bday: ";
	getline(std::cin, entry.bday);
	std::cout << "fav_meal: ";
	getline(std::cin, entry.fav_meal);
	std::cout << "underwear_color: ";
	getline(std::cin, entry.underwear_color);
	std::cout << "darkest_secret: ";
	getline(std::cin, entry.darkest_secret);
	for (int ii = 0; ii < MAX_ENTRIES; ii++)
	{
		if (false == used[ii])
		{
			used[ii] = true;
			entries[ii] = entry;
			return ;
		}
	}
}

void			phonebook::search(void)
{
	int					index;
	phonebook_entry		entry;
	std::string			line;
	
	for (int ii = 0; ii < MAX_ENTRIES; ii++)
	{
		if (true == used[ii])
		{
			std::cout << std::setw(10) << ii << '|';
			if (entries[ii].first_name.length() <= 10)
				std::cout << std::setw(10) << entries[ii].first_name << "|";
			else
				std::cout << entries[ii].first_name.substr(0, 9) << ".|";
			if (entries[ii].last_name.length() <= 10)
				std::cout << std::setw(10) << entries[ii].last_name << "|";
			else
				std::cout << entries[ii].last_name.substr(0, 9) << ".|";
			if (entries[ii].nick.length() <= 10)
				std::cout << std::setw(10) << entries[ii].nick << "|";
			else
				std::cout << entries[ii].nick.substr(0, 9) << ".|";
			std::cout << '\n';
		}
	}
	std::cout << "index: ";
	getline(std::cin, line);
	index = atoi(line.c_str());
	if (index < 0 || index >= MAX_ENTRIES || false == used[index])
		return ;
	entry = entries[index];
	std::cout << "first name " << entry.first_name << std::endl;
	std::cout << "last name " << entry.last_name << std::endl;
	std::cout << "nick name " << entry.nick << std::endl;
	std::cout << "login "<< entry.login << std::endl;
	std::cout << "postal address " << entry.postal << std::endl;
	std::cout << "email " << entry.email << std::endl;
	std::cout << "phone number " << entry.phone << std::endl;
	std::cout << "birthday " << entry.bday << std::endl;
	std::cout << "favorite meal " << entry.fav_meal << std::endl;
	std::cout << "underwear color " << entry.underwear_color << std::endl;
	std::cout << "darkest secret " << entry.darkest_secret << std::endl;
}
