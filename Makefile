NAME	:= 	libft.a

ifdef COUNT
T := $(shell $(MAKE) $(NAME) --no-print-directory \
		-nrR \
		PROGRESS="COUNTTHIS" | grep -c "COUNTTHIS")
N := x
C = $(words $N)$(eval N := x $N)
PROGRESS = [`expr $C '*' 100 / $T`%%]
endif

#LIBFT

LFT_INCLUDES_DIR = includes/

LFT_SRCS_DIR = srcs/

LFT_INCLUDES := libft.h									\
				libft_conversion.h						\
				libft_lst.h								\
				libft_gnl.h								\
				libft_mem.h								\
				libft_print.h							\
				libft_str.h								\
				libft_time.h							\
				libft_vector.h							\
				argv_join.h

LFT_INCLUDES := $(addprefix $(LFT_INCLUDES_DIR),$(LFT_INCLUDES))

SRCDIR_ARGVJOIN := argv_join/

SRCDIR_CONVERSION := conversion/

SRCDIR_GET_NEXT_LINE := get_next_line/

SRCDIR_LST := lst/

SRCDIR_MEM := mem/

SRCDIR_PRINT := print/

SRCDIR_STR := str/

SRCDIR_TIME := time/

LFT_OBJSDIR := objs/

LFT_OBJSDIRS :=	$(LFT_OBJSDIR)							\
				$(LFT_OBJSDIR)$(SRCDIR_CONVERSION)		\
				$(LFT_OBJSDIR)$(SRCDIR_GET_NEXT_LINE)	\
				$(LFT_OBJSDIR)$(SRCDIR_LST)				\
				$(LFT_OBJSDIR)$(SRCDIR_MEM)				\
				$(LFT_OBJSDIR)$(SRCDIR_PRINT)			\
				$(LFT_OBJSDIR)$(SRCDIR_STR)				\
				$(LFT_OBJSDIR)$(SRCDIR_TIME)			\
				$(LFT_OBJSDIR)$(SRCDIR_ARGVJOIN)

SRC_ARGVJOIN		:= argv_join.c

SRCPATH_ARGVJOIN := $(addprefix $(SRCDIR_ARGVJOIN), $(SRC_ARGVJOIN))

SRC_CONVERSION :=	ft_atoi.c							\
					ft_atoi_index.c						\
					ft_itoa.c

SRCPATH_CONVERSION := $(addprefix $(SRCDIR_CONVERSION), $(SRC_CONVERSION))

SRC_GET_NEXT_LINE :=	get_next_line.c

SRCPATH_GET_NEXT_LINE := $(addprefix $(SRCDIR_GET_NEXT_LINE), $(SRC_GET_NEXT_LINE))

SRC_LST := 	ft_lst_addback.c							\
			ft_lst_addfront.c							\
			ft_lst_clear.c								\
			ft_lst_delone.c								\
			ft_lst_iter.c								\
			ft_lst_last.c								\
			ft_lst_map.c								\
			ft_lst_maxstrlen.c							\
			ft_lst_new.c								\
			ft_lst_size.c								

SRCPATH_LST := $(addprefix $(SRCDIR_LST), $(SRC_LST))

SRC_MEM :=	ft_bzero.c									\
			ft_calloc.c									\
			ft_free_tab.c								\
			ft_memccpy.c								\
			ft_memchr.c									\
			ft_memcmp.c									\
			ft_memcpy.c									\
			ft_memmove.c								\
			ft_memset.c									

SRCPATH_MEM := $(addprefix $(SRCDIR_MEM), $(SRC_MEM))

SRC_PRINT :=	ft_putchar_fd.c							\
				ft_putendl_fd.c							\
				ft_putnbr_fd.c							\
				ft_putstr_fd.c							\
				ft_putunbr_fd.c							\
				print_lst.c								\
				print_tab.c
				
SRCPATH_PRINT := $(addprefix $(SRCDIR_PRINT), $(SRC_PRINT))

SRC_STR :=	ft_chrcmp.c									\
			ft_freestr.c								\
			ft_isalnum.c								\
			ft_isalpha.c								\
			ft_isascii.c								\
			ft_isdigit.c								\
			ft_isprint.c								\
			ft_isws.c									\
			ft_split.c									\
			ft_strchr.c									\
			ft_strdup.c									\
			ft_strdupto.c								\
			ft_strjoin.c								\
			ft_strfreejoin.c							\
			ft_str2freejoin.c							\
			ft_strlcat.c								\
			ft_strcpy.c									\
			ft_strlcpy.c								\
			ft_strlen.c									\
			ft_strlento.c								\
			ft_strmapi.c								\
			ft_str_replace.c							\
			ft_strcmp.c									\
			ft_strncmp.c								\
			ft_strnstr.c								\
			ft_strrchr.c								\
			ft_strrev.c									\
			ft_strtabdup.c								\
			ft_tab_addback.c                            \
			ft_strtrim.c								\
			ft_substr.c									\
			ft_tablen.c									\
			ft_tolower.c								\
			ft_toupper.c

SRCPATH_STR := $(addprefix $(SRCDIR_STR), $(SRC_STR))

SRC_TIME :=	get_time.c									\

SRCPATH_TIME :=	$(addprefix $(SRCDIR_TIME), $(SRC_TIME))

LFT_SRCS :=	$(SRCPATH_CONVERSION)						\
			$(SRCPATH_GET_NEXT_LINE)					\
			$(SRCPATH_LST)								\
			$(SRCPATH_MEM)								\
			$(SRCPATH_PRINT)							\
			$(SRCPATH_STR)								\
			$(SRCPATH_TIME)								\
			$(SRCPATH_ARGVJOIN)


#OBJS/INCLUDES

LFT_OBJS := $(LFT_SRCS:.c=.o)

OBJSDIRS := $(LFT_OBJSDIRS)

OBJS := $(addprefix $(LFT_OBJSDIR), $(LFT_OBJS))

INCLUDES := $(LFT_INCLUDES)

#GLOBAL VARIABLES

CC = clang
RAN = ar rcs
RM = /bin/rm -rf
PRINT = printf
CFLAGS = -Wall -Werror -Wextra

HIDE_CURSOR := \e[?25l
SHOW_CURSOR := \e[?25h
CURSOR_LEFT := \e[1000D
ERASE_ENDLINE := \e[K
ERASE_FULLLINE := \e[2K

#RULES

all: premake

premake: $(OBJSDIRS)
		@$(MAKE) -s $(NAME) --no-print-directory COUNT=1

$(NAME)	: $(OBJS)
		@$(PRINT) "$(ERASE_FULLLINE)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n$(SHOW_CURSOR)" "Compiled lib" "$(NAME)"
		@$(RAN) $(NAME) $(OBJS)

$(LFT_OBJSDIR)%.o: $(LFT_SRCS_DIR)%.c $(LFT_INCLUDES)
		$(CC) $(CFLAGS) -c -I $(LFT_INCLUDES_DIR) -o $@ $<
		@$(PRINT) "$(HIDE_CURSOR)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m$(PROGRESS)\033[0m$(ERASE_ENDLINE)$(CURSOR_LEFT)" "Compilation..." "$(NAME)"

$(OBJSDIRS):
		@mkdir -p $@

show_cursor:
		@printf "\033[0;32mCursor Printed. \033[0m$(SHOW_CURSOR)\n"

clean	:
		@$(RM) $(OBJSDIRS)
		@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "Cleaning objects" "$(NAME)"

fclean	:	clean
		@$(RM) $(NAME)
		@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "Cleaning lib" "$(NAME)"

re		: 	fclean all

.PHONY	: all clean fclean show_cursor premake re