# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:19:04 by ycarro            #+#    #+#              #
#    Updated: 2023/11/13 15:05:41 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CPL := c++

SRCFILES := megaphone.cpp

OBJFILES := $(SRCFILES:%.cpp=obj/%.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CPL) $(OBJFILES) -o $@

obj/%.o: src/%.cpp
		@mkdir -p $(dir $@)
		$(CPL) $(CFLAGS) -o $@ -c $<

clean:
		rm -f $(OBJFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re