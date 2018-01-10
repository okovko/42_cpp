# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2018/01/09 20:08:12 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
FLAGS = -Wall -Wextra -Werror

.PHONY: re all clean fclean

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) phonebook.cpp main.cpp -o phonebook 

clean:

fclean:
	/bin/rm -rf $(NAME)

re: fclean all
