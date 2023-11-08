# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:19:04 by ycarro            #+#    #+#              #
#    Updated: 2023/11/08 13:33:05 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := g++

SRCFILES := megaphone.cpp

OBJFILES := $(SRCFILES:%.c=obj/%.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) -o $@

obj/%.o: src/%.c
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -f $(OBJFILES)

fclean: #clean
		rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re