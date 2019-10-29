# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2019/10/29 15:07:37 by aaugusti      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	libft
SRCS		=	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp ft_memcpy\
	ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_calloc\
	ft_itoa ft_putchar_fd ft_putendl_fd ft_putstr_fd ft_putnbr_fd ft_cchr\
	ft_split ft_strjoin ft_strmapi ft_strtrim
CFILES		=	$(SRCS:%=srcs/%.c)
OFILES		=	$(CFILES:.c=.o)
INCLUDES	=	./includes
FLAGS		=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	ac rcs $(NAME).a $(OFILES)
	@echo "Done"

srcs/%.o: srcs/%.c
	@echo "Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS) -I $(INCLUDES)

clean:
	@rm -f $(OFILES)

fclean: clean
	@echo "Cleaning: "
	@rm -f $(NAME)

re: fclean all 
