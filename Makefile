##
## Makefile for bistr in /home/laroch_f/Desktop/Bistro/Piscine_C_bistromathique
## 
## Made by Hugo Laroche
## Login   <laroch_f@epitech.net>
## 
## Started on  Wed Mar 30 19:47:52 2016 Hugo Laroche
## Last update Sun Apr  3 22:54:13 2016 Hugo Laroche
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
#CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I include

LDFLAGS	= -L lib/my -lmy

NAME	= calc

SRCS	= evalexpr/main.c \
	  evalexpr/str_to_stru.c \
	  evalexpr/t_num_val.c \
	  evalexpr/debug.c \
	  evalexpr/add_mult_bracket.c \
	  evalexpr/pile.c \
	  evalexpr/do_npi.c \
	  evalexpr/do_calc.c \
	  addinf/is_neg_bistro.c \
	  addinf/main_add.c \
	  addinf/main_mult.c \
	  addinf/mult.c \
	  addinf/my_add.c \
	  addinf/my_evil_nbr.c \
	  addinf/my_strcmp_int.c \
	  addinf/my_sub.c \
	  divinf/my_div.c \
	  divinf/my_mod.c \
	  divinf/usefull_div.c \
	  evalexpr/error_handle.c \
	  evalexpr/other_func.c \
	  evalexpr/other_other_func.c \
	  evalexpr/t_num_util.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
