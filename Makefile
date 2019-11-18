# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2019/11/18 20:08:33 by abe              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRCS			=	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp ft_memcpy\
	ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_calloc\
	ft_itoa ft_putchar_fd ft_putendl_fd ft_putstr_fd ft_putnbr_fd ft_cchr\
	ft_split ft_strjoin ft_strmapi ft_strtrim ft_substr ft_strdup ft_strlen_c\
	ft_lstprint ft_lstcount_condition ft_strdup_c ft_strldup ft_intlen\
	ft_itoa_base ft_putstr_n_fd ft_atoi_ul ft_atoi_ull ft_atoi_ui ft_inset\
	ft_ull_len

BONUS_SRCS		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone\
	ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

CFILES			=	$(SRCS:%=%.c)
OFILES			=	$(SRCS:%=%.o)

BONUS_CFILES	=	$(BONUS_SRCS:%=%_bonus.c)
BONUS_OFILES	=	$(BONUS_SRCS:%=%_bonus.o)

INCLUDES		=	./includes
FLAGS			=	-Wall -Werror -Wextra

AR_COMMAND		= ar rs

all: $(NAME)

$(NAME): $(OFILES)
	@echo "Linking lib"
	@$(AR_COMMAND) $(NAME) $(OFILES)
	@echo "Done"

%.o: %.c
	@echo "Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS) -I $(INCLUDES)

clean: _clean
	@rm -f bonus
	@echo "Cleaning..."

fclean: _clean
	@echo "Fucking cleaning..."
	@rm -f $(NAME)

_clean:
	@rm -f $(OFILES) $(BONUS_OFILES)

re: fclean all

bonus: $(OFILES) $(BONUS_OFILES) $(NAME)
	@echo "Linking bonus lib"
	@$(AR_COMMAND) $(NAME) $(OFILES) $(BONUS_OFILES)
	@touch bonus
	@echo "Bonus done"
