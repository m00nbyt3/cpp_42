# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:19:04 by ycarro            #+#    #+#              #
#    Updated: 2023/11/13 17:49:15 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

CPL := c++

INCLUDE :=  -I include/

SRCFILES := main.cpp \
			PhoneBookClass.cpp \
			ContactClass.cpp

HEADERFILES := include/PhoneBookClass.hpp \
			include/ContactClass.hpp

OBJFILES := $(SRCFILES:%.cpp=obj/%.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98 $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CPL) $(OBJFILES) -o $@

obj/%.o: src/%.cpp $(HEADERFILES)
		@mkdir -p $(dir $@)
		$(CPL) $(CFLAGS) -o $@ -c $<

clean:
		rm -f $(OBJFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re