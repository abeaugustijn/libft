# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2019/11/02 15:05:45 by aaugusti      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libft
SRCS			=	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp ft_memcpy\
	ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_calloc\
	ft_itoa ft_putchar_fd ft_putendl_fd ft_putstr_fd ft_putnbr_fd ft_cchr\
	ft_split ft_strjoin ft_strmapi ft_strtrim ft_substr ft_strdup ft_strlen_c
BONUS_SRCS		=	ft_lstadd_back_bonus ft_lstadd_front_bonus ft_lstclear_bonus\
	ft_lstdelone_bonus ft_lstiter_bonus ft_lstlast_bonus ft_lstmap_bonus\
	ft_lstnew_bonus ft_lstsize_bonus
CFILES			=	$(SRCS:%=%.c)
OFILES			=	$(SRCS:%=%.o)
BONUS_CFILES	=	$(BONUS_SRCS:%=%.c)
BONUS_OFILES	=	$(BONUS_SRCS:%=%.o)
INCLUDES		=	./includes
FLAGS			=	-Wall -Werror -Wextra

AR_COMMAND		= ar rsv

all: $(NAME)

$(NAME): $(OFILES)
	$(AR_COMMAND) $(NAME).a $(OFILES)
	@echo "Done"

%.o: %.c
	@echo "Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS) -I $(INCLUDES)

clean:
	@rm -f $(OFILES) $(BONUS_OFILES) $(NAME).a

fclean: clean
	@echo "Cleaning: "
	@rm -f $(NAME)

re: fclean all 

bonus: $(OFILES) $(BONUS_OFILES)
	$(AR_COMMAND) $(NAME).a $(OFILES) $(BONUS_OFILES)
	@echo "Bonus done"
