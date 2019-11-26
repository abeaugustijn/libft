# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2019/11/26 16:30:11 by aaugusti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRCS			=	atoi\
					bzero\
					isalnum\
					isalpha\
					isascii\
					isdigit\
					isprint\
					memccpy\
					memchr\
					memcmp\
					memcpy\
					memmove\
					memset\
					strchr\
					strlcat\
					strlcpy\
					strlen\
					strncmp\
					strnstr\
					strrchr\
					tolower\
					toupper\
					calloc\
					itoa\
					putchar_fd\
					putendl_fd\
					putstr_fd\
					putnbr_fd\
					split\
					strjoin\
					strmapi\
					strtrim\
					substr\
					strdup

BONUS_SRCS		=	lstadd_back\
					lstadd_front\
					lstclear\
					lstdelone\
					lstiter\
					lstlast\
					lstnew\
					lstsize\
					lstprint\
					lstcount_condition\
					cchr\
					strlen_c\
					strdup_c\
					strldup\
					intlen\
					itoa_base\
					putstr_n_fd\
					atoi_ul\
					atoi_ull\
					atoi_ui\
					inset\
					ull_len\
					puthex_fd\
					hexlen

CFILES			=	$(SRCS:%=ft_%.c)
OFILES			=	$(SRCS:%=ft_%.o)

BONUS_CFILES	=	$(BONUS_SRCS:%=ft_%_bonus.c)
BONUS_OFILES	=	$(BONUS_SRCS:%=ft_%_bonus.o)

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
	@gcc -o $@ -c $< $(FLAGS) -I $(INCLUDES) -g

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
