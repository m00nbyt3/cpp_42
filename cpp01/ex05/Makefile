# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:19:04 by ycarro            #+#    #+#              #
#    Updated: 2023/11/20 15:54:18 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex05

CPL := c++

INCLUDE :=  -I include/

SRCFILES := main.cpp \
			Harl.cpp

HEADERFILES := Harl.hpp

OBJFILES := $(SRCFILES:%.cpp=obj/%.o)
HEADERFILES := $(HFILES:%=include/%)

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