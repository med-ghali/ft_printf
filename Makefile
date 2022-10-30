CC := cc
CFLAGS := -Wall -Wextra -Werror
OBJS := ft_printf.o ft_printf_utilis.o ft_printf_utilis2.o
HEADER := ft_printf.h
NAME := libftprintf.a
AR := ar rc
RM := rm -f

all : $(NAME)

$(NAME) : $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)	
	$(CC) $(CFLAGS) -c $< 

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
