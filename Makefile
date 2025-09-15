NAME = libft.a
CC = cc
CCFLAG = -Wall -Wextra -Werror
SRC =  ft_atoi.c       ft_isalpha.c    ft_itoa.c       ft_memmove.c    ft_putnbr_fd.c  ft_strdup.c     ft_strlcpy.c    ft_strnstr.c    ft_tolower.c \
ft_bzero.c      ft_isascii.c    ft_memchr.c     ft_memset.c     ft_putstr_fd.c  ft_striteri.c   ft_strlen.c     ft_strrchr.c    ft_toupper.c \
ft_calloc.c     ft_isdigit.c    ft_memcmp.c     ft_putchar_fd.c    ft_strjoin.c    ft_strmapi.c    ft_strtrim.c    \
ft_isalnum.c    ft_isprint.c    ft_memcpy.c     ft_putendl_fd.c ft_strchr.c     ft_strlcat.c    ft_strncmp.c    ft_substr.c  \
#ft_split.c   
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
# 	$(CC) $(CCFLAG) $^ -o $@
	ar rcs $(NAME) $(OBJ)
%.o:%.c Makefile libft.h
	@printf "\033[1;33; 46m Complied👌🏽 \033[1M;46M $@ \033[0m \n"
	$(CC) $(CCFLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean all 

.PHONY: clean fclean all re