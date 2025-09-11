NAME = libft.a
CC = cc
CCFLAG = -Wall -Wextra -Werror
SRC =  ft_atoi.c ft_isascii.c     ft_strlcpy.c    ft_toupper.c\
ft_bzero.c      ft_isdigit.c    ft_memset.c     ft_strlen.c\
ft_isalnum.c    ft_isprint.c    ft_strchr.c     \
ft_isalpha.c    ft_memcpy.c     ft_strlcat.c    ft_tolower.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
# 	$(CC) $(CCFLAG) $^ -o $@
	ar rcs $(NAME) $(OBJ)
%.o:%.c Makefile libft.h
	@printf "\033[1;33;46m Complied👌🏽 \033[1M;46M $@ \033[0m \n"
	$(CC) $(CCFLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean all 

.PHONY: clean fclean all re