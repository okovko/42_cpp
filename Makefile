# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2018/01/08 10:33:22 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

.PHONY: re all clean fclean

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror megaphone.cpp -o megaphone

clean:

fclean:
	/bin/rm -rf $(NAME)

re: fclean all
