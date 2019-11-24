#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jdunnink <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/24 13:53:18 by jdunnink      #+#    #+#                  #
#    Updated: 2019/11/24 13:54:42 by jdunnink      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

SRC =	main.c			\
		substr_t01.c	\
		strjoin_t01.c 	\
		strtrim_t01.c	\
		split_t01.c		\
		itoa_t01.c		\
		strmapi_t01.c

OBJ = $(SRC:.c=.o)

SRCDIR = srcs

OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

HEADER = -I includes

CC = gcc

NAME = tester

CFLAGS = -Wall -Wextra -Werror

LIBS = -L libft/ -lft

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJS) $(HEADER) $(LIBS)

$(OBJS): $(SRCS)
	@/bin/mkdir -p $(OBJDIR) ;
	@make -C libft/
	@$(CC) -c $(CFLAGS) $(SRCS) $(HEADER)
	@/bin/mv $(OBJ) $(OBJDIR)/

clean:
	@/bin/rm -Rf $(OBJDIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

relib:
	@make re -C libft/

cleanse: fclean
	make fclean -C libft/

make run:
	@make re
	@./tester