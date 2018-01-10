/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 19:27:33 by olkovale          #+#    #+#             */
/*   Updated: 2018/01/09 19:27:33 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>

# define MAX_ENTRIES 8

class	phonebook_entry
{
public:
	std::string		first_name;
	std::string		last_name;
	std::string		nick;
	std::string		login;
	std::string		postal;
	std::string		email;
	std::string		phone;
	std::string		bday;
	std::string		fav_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
};

class	phonebook
{
	bool				used[MAX_ENTRIES];
	phonebook_entry		entries[MAX_ENTRIES];
public:
	phonebook();

	void				add(void);
	void				search(void);
};

#endif
