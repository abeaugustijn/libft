# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2020/01/27 11:05:40 by aaugusti         ###   ########.fr        #
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
					lstmap\
					lstcount_condition\
					cchr\
					strlen_c\
					strdup_c\
					strldup\
					intlen\
					putstr_n_fd\
					atoi_ul\
					atoi_ull\
					atoi_ui\
					puthex_fd\
					putnbr_ll_fd\
					hexlen\
					unsignedlen\
					putunsigned_fd

CFILES			=	$(SRCS:%=ft_%.c)
OFILES			=	$(SRCS:%=ft_%.o)

BONUS_CFILES	=	$(BONUS_SRCS:%=ft_%_bonus.c)
BONUS_OFILES	=	$(BONUS_SRCS:%=ft_%_bonus.o)

FLAGS			=	-Wall -Werror -Wextra

AR_COMMAND		= ar rs

all: $(NAME)

$(NAME): $(OFILES)
	$(AR_COMMAND) $(NAME) $(OFILES)

%.o: %.c
	gcc -o $@ -c $< $(FLAGS)

clean: _clean

fclean: _clean
	rm -f $(NAME)

_clean:
	@rm -f bonus
	rm -f $(OFILES) $(BONUS_OFILES)

re: fclean all

bonus: $(OFILES) $(BONUS_OFILES) $(NAME)
	$(AR_COMMAND) $(NAME) $(OFILES) $(BONUS_OFILES)
	@touch bonus
