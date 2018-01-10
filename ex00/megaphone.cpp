/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:05:07 by olkovale          #+#    #+#             */
/*   Updated: 2018/01/09 18:37:19 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <sstream>
#include <iostream>

char	*cstr_to_upper(char *cstr)
{
	char	*head;

	head = cstr;
	for (; '\0' != *cstr; cstr++)
		*cstr = toupper(*cstr);
	return (head);
}

int		main(int ac, char **av)
{
	std::stringstream ss;

	if (1 == ac)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int ii = 1; ii < ac; ii++)
		ss << cstr_to_upper(av[ii]);
	std::cout << ss.str() << '\n';
}
