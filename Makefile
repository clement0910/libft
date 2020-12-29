NAME 	= 	libft.a

HEADER	=	libft.h

SRCS	=	ft_atoi.c				\
			ft_atoi_index.c			\
			ft_bzero.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_memcpy.c				\
			ft_memset.c				\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strlen.c				\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_calloc.c				\
			ft_strdup.c				\
			ft_strlcpy.c			\
			ft_strlcat.c			\
			ft_substr.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_split.c				\
			ft_itoa.c				\
			ft_strmapi.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_free_tab.c 			\
			ft_chrcmp.c				\
			ft_strrev.c				\
			ft_tablen.c				\
			ft_lstmaxlen.c 			\
			get_next_line.c			\
			get_next_line_utils.c	\

BONUS	=	ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c		\

OBJS_B	=	$(BONUS:.c=.o)

OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME) 

$(NAME)	:	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus	:	$(OBJS) $(OBJS_B)
		ar -rcs $(NAME) $(OBJS) $(OBJS_B)

%.o:%.c $(HEADER)
		gcc -Wall -Wextra -Werror -o $@ -c $< -I $(HEADER)

clean	:
		rm -f $(OBJS) $(OBJS_B)

fclean	:	clean
		rm -f $(NAME)

re		: 	fclean all