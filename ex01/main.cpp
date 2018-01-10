/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 20:06:43 by olkovale          #+#    #+#             */
/*   Updated: 2018/01/09 20:06:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "phonebook.hpp"

int		main()
{
	phonebook		pb;
	std::string		cmd;

	std::cout << "cmd: ";
	getline(std::cin, cmd);
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		std::cout << "cmd: ";
		getline(std::cin, cmd);
	}
	return (0);
}
