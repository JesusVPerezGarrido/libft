NAME = libft.a

SRCS = ft_atoi.c \
 ft_memcmp.c \
 ft_strdup.c \
 ft_strtrim.c \
 ft_bzero.c \
 ft_memcpy.c \
 ft_striteri.c \
 ft_substr.c \
 ft_calloc.c \
 ft_memmove.c \
 ft_strjoin.c \
 ft_tolower.c \
 ft_isalnum.c \
 ft_memset.c \
 ft_strlcat.c \
 ft_toupper.c \
 ft_isalpha.c \
 ft_putchar_fd.c \
 ft_strlcpy.c \
 ft_isascii.c \
 ft_putendl_fd.c \
 ft_strlen.c \
 ft_isdigit.c \
 ft_putnbr_fd.c \
 ft_strmapi.c \
 ft_isprint.c \
 ft_isspace.c \
 ft_putstr_fd.c \
 ft_strncmp.c \
 ft_itoa.c \
 ft_split.c \
 ft_strnstr.c \
 ft_memchr.c \
 ft_strchr.c \
 ft_strrchr.c \
 get_next_line.c \
 ft_hextoa.c \
 ft_printchr.c \
 ft_printf.c \
 ft_printhex.c \
 ft_printnbr.c \
 ft_printptr.c \
 ft_printstr.c \
 ft_ptrtoa.c \
 ft_uitoa.c \
 ft_freejoin.c \
 ft_charcount.c \
 ft_highest.c \
 ft_lowest.c

BONUS = ft_lstadd_back.c \
 ft_lstdelone.c \
 ft_lstnew.c \
 ft_lstadd_front.c \
 ft_lstiter.c \
 ft_lstsize.c \
 ft_lstclear.c \
 ft_lstlast.c \
 ft_lstmap.c \
 ft_lstdetach.c \
 ft_lstfirst.c

FLAGS = -Wall -Werror -Wextra -g

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS} ${BONUS_OBJS}
	@ar rcs ${NAME} ${OBJS} ${BONUS_OBJS} && printf "making libft\n"

%.o: %.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@ && printf "Compiling: $(notdir $<)\n"

clean:
	@rm -f ${OBJS} ${BONUS_OBJS} && printf "removing object files\n"

fclean: clean
	@rm -f ${NAME} && printf "removing $(NAME)\n"

re: fclean all

.PHONY: all clean fclean re bonus
