NAME  = libftprintf.a
FL = -Wall -Werror -Wextra

FOLDER_LIBFT = libft
FOLDER_PRINTF = ft_printf

SRC_LIBFT =\
	$(FOLDER_LIBFT)/ft_atoi.c\
	$(FOLDER_LIBFT)/ft_bzero.c\
	$(FOLDER_LIBFT)/ft_isalnum.c\
	$(FOLDER_LIBFT)/ft_isalpha.c\
	$(FOLDER_LIBFT)/ft_isascii.c\
	$(FOLDER_LIBFT)/ft_isdigit.c\
	$(FOLDER_LIBFT)/ft_isprint.c\
	$(FOLDER_LIBFT)/ft_itoa.c\
	$(FOLDER_LIBFT)/ft_itoa_base.c\
	$(FOLDER_LIBFT)/ft_lstadd.c\
	$(FOLDER_LIBFT)/ft_lstdel.c\
	$(FOLDER_LIBFT)/ft_lstdelone.c\
	$(FOLDER_LIBFT)/ft_lstiter.c\
	$(FOLDER_LIBFT)/ft_lstlast.c\
	$(FOLDER_LIBFT)/ft_lstlen.c\
	$(FOLDER_LIBFT)/ft_lstmap.c\
	$(FOLDER_LIBFT)/ft_lstnadd.c\
	$(FOLDER_LIBFT)/ft_lstnew.c\
	$(FOLDER_LIBFT)/ft_memalloc.c\
	$(FOLDER_LIBFT)/ft_memccpy.c\
	$(FOLDER_LIBFT)/ft_memchr.c\
	$(FOLDER_LIBFT)/ft_memcmp.c\
	$(FOLDER_LIBFT)/ft_memcpy.c\
	$(FOLDER_LIBFT)/ft_memdel.c\
	$(FOLDER_LIBFT)/ft_memmove.c\
	$(FOLDER_LIBFT)/ft_memset.c\
	$(FOLDER_LIBFT)/ft_putchar.c\
	$(FOLDER_LIBFT)/ft_putchar_fd.c\
	$(FOLDER_LIBFT)/ft_putendl.c\
	$(FOLDER_LIBFT)/ft_putendl_fd.c\
	$(FOLDER_LIBFT)/ft_putnbr.c\
	$(FOLDER_LIBFT)/ft_putnbr_fd.c\
	$(FOLDER_LIBFT)/ft_putnbr_l.c\
	$(FOLDER_LIBFT)/ft_putstr.c\
	$(FOLDER_LIBFT)/ft_putstr_fd.c\
	$(FOLDER_LIBFT)/ft_strcat.c\
	$(FOLDER_LIBFT)/ft_strchr.c\
	$(FOLDER_LIBFT)/ft_strclr.c\
	$(FOLDER_LIBFT)/ft_strcmp.c\
	$(FOLDER_LIBFT)/ft_strcpy.c\
	$(FOLDER_LIBFT)/ft_strdel.c\
	$(FOLDER_LIBFT)/ft_strdup.c\
	$(FOLDER_LIBFT)/ft_strequ.c\
	$(FOLDER_LIBFT)/ft_striter.c\
	$(FOLDER_LIBFT)/ft_striteri.c\
	$(FOLDER_LIBFT)/ft_strjoin.c\
	$(FOLDER_LIBFT)/ft_strlcat.c\
	$(FOLDER_LIBFT)/ft_strlen.c\
	$(FOLDER_LIBFT)/ft_strmap.c\
	$(FOLDER_LIBFT)/ft_strmapi.c\
	$(FOLDER_LIBFT)/ft_strncat.c\
	$(FOLDER_LIBFT)/ft_strncmp.c\
	$(FOLDER_LIBFT)/ft_strncpy.c\
	$(FOLDER_LIBFT)/ft_strnequ.c\
	$(FOLDER_LIBFT)/ft_strnew.c\
	$(FOLDER_LIBFT)/ft_strnstr.c\
	$(FOLDER_LIBFT)/ft_strrchr.c\
	$(FOLDER_LIBFT)/ft_strsplit.c\
	$(FOLDER_LIBFT)/ft_strstr.c\
	$(FOLDER_LIBFT)/ft_strsub.c\
	$(FOLDER_LIBFT)/ft_strtrim.c\
	$(FOLDER_LIBFT)/ft_tolower.c\
	$(FOLDER_LIBFT)/ft_toupper.c\
	$(FOLDER_LIBFT)/ft_wputchar.c

SRC_PRINTF =\
	$(FOLDER_PRINTF)/ft_to_string.c\
	$(FOLDER_PRINTF)/ft_to_string2.c\
	$(FOLDER_PRINTF)/ft_to_string3.c\
	$(FOLDER_PRINTF)/ft_read_func.c\
	$(FOLDER_PRINTF)/ft_integer.c\
	$(FOLDER_PRINTF)/ft_printf.c

HEADER = includes

all: $(NAME)
$(NAME):
	gcc -I $(HEADER) $(FL) -c $(SRC_LIBFT) $(SRC_PRINTF)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all