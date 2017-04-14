NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES_FLD_1 = src
SOURCES_FLD_2 = src_print

HEADERS_FLD_1 = include

OBJECTS_FLD = obj

OBJECTS_1 =\
	$(OBJECTS_FLD)/ft_atoi.o\
	$(OBJECTS_FLD)/ft_bzero.o\
	$(OBJECTS_FLD)/ft_isalnum.o\
	$(OBJECTS_FLD)/ft_isalpha.o\
	$(OBJECTS_FLD)/ft_isascii.o\
	$(OBJECTS_FLD)/ft_isdigit.o\
	$(OBJECTS_FLD)/ft_isprint.o\
	$(OBJECTS_FLD)/ft_itoa.o\
	$(OBJECTS_FLD)/ft_itoa_base.o\
	$(OBJECTS_FLD)/ft_lstadd.o\
	$(OBJECTS_FLD)/ft_lstdel.o\
	$(OBJECTS_FLD)/ft_lstdelone.o\
	$(OBJECTS_FLD)/ft_lstiter.o\
	$(OBJECTS_FLD)/ft_lstlast.o\
	$(OBJECTS_FLD)/ft_lstlen.o\
	$(OBJECTS_FLD)/ft_lstmap.o\
	$(OBJECTS_FLD)/ft_lstnadd.o\
	$(OBJECTS_FLD)/ft_lstnew.o\
	$(OBJECTS_FLD)/ft_memalloc.o\
	$(OBJECTS_FLD)/ft_memccpy.o\
	$(OBJECTS_FLD)/ft_memchr.o\
	$(OBJECTS_FLD)/ft_memcmp.o\
	$(OBJECTS_FLD)/ft_memcpy.o\
	$(OBJECTS_FLD)/ft_memdel.o\
	$(OBJECTS_FLD)/ft_memmove.o\
	$(OBJECTS_FLD)/ft_memset.o\
	$(OBJECTS_FLD)/ft_putchar.o\
	$(OBJECTS_FLD)/ft_putchar_fd.o\
	$(OBJECTS_FLD)/ft_putendl.o\
	$(OBJECTS_FLD)/ft_putendl_fd.o\
	$(OBJECTS_FLD)/ft_putnbr.o\
	$(OBJECTS_FLD)/ft_putnbr_fd.o\
	$(OBJECTS_FLD)/ft_putnbr_l.o\
	$(OBJECTS_FLD)/ft_putstr.o\
	$(OBJECTS_FLD)/ft_putstr_fd.o\
	$(OBJECTS_FLD)/ft_strcat.o\
	$(OBJECTS_FLD)/ft_strchr.o\
	$(OBJECTS_FLD)/ft_strclr.o\
	$(OBJECTS_FLD)/ft_strcmp.o\
	$(OBJECTS_FLD)/ft_strcpy.o\
	$(OBJECTS_FLD)/ft_strdel.o\
	$(OBJECTS_FLD)/ft_strdup.o\
	$(OBJECTS_FLD)/ft_strequ.o\
	$(OBJECTS_FLD)/ft_striter.o\
	$(OBJECTS_FLD)/ft_striteri.o\
	$(OBJECTS_FLD)/ft_strjoin.o\
	$(OBJECTS_FLD)/ft_strlcat.o\
	$(OBJECTS_FLD)/ft_strlen.o\
	$(OBJECTS_FLD)/ft_strmap.o\
	$(OBJECTS_FLD)/ft_strmapi.o\
	$(OBJECTS_FLD)/ft_strncat.o\
	$(OBJECTS_FLD)/ft_strncmp.o\
	$(OBJECTS_FLD)/ft_strncpy.o\
	$(OBJECTS_FLD)/ft_strnequ.o\
	$(OBJECTS_FLD)/ft_strnew.o\
	$(OBJECTS_FLD)/ft_strnstr.o\
	$(OBJECTS_FLD)/ft_strrchr.o\
	$(OBJECTS_FLD)/ft_strsplit.o\
	$(OBJECTS_FLD)/ft_strstr.o\
	$(OBJECTS_FLD)/ft_strsub.o\
	$(OBJECTS_FLD)/ft_strtrim.o\
	$(OBJECTS_FLD)/ft_tolower.o\
	$(OBJECTS_FLD)/ft_toupper.o\
	$(OBJECTS_FLD)/ft_wputchar.o

OBJECTS_2 =\
	$(OBJECTS_FLD)/ft_con.o\
	$(OBJECTS_FLD)/ft_con_sc.o\
	$(OBJECTS_FLD)/ft_convers.o\
	$(OBJECTS_FLD)/ft_param_make.o\
	$(OBJECTS_FLD)/ft_precis.o\
	$(OBJECTS_FLD)/ft_printf.o


HEADERS_1 =\
	$(HEADERS_FLD_1)/$(HEADERS_FLD_1).h\
	$(HEADERS_FLD_1)/libft.h\
	$(HEADERS_FLD_1)/printf.h


all : $(NAME)

$(NAME) : $(OBJECTS_1) $(OBJECTS_2) $(HEADERS_1)
	ar rc $(NAME) $(OBJECTS_1) $(OBJECTS_2)
	ranlib $(NAME)

clean :
	rm -f $(OBJECTS_1) $(OBJECTS_2)
	rm -rf $(OBJECTS_FLD)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(OBJECTS_FLD)/ft_atoi.o : $(SOURCES_FLD_1)/ft_atoi.c $(HEADERS_1)
	mkdir -p $(OBJECTS_FLD)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_atoi.c -o $(OBJECTS_FLD)/ft_atoi.o

$(OBJECTS_FLD)/ft_bzero.o : $(SOURCES_FLD_1)/ft_bzero.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_bzero.c -o $(OBJECTS_FLD)/ft_bzero.o

$(OBJECTS_FLD)/ft_isalnum.o : $(SOURCES_FLD_1)/ft_isalnum.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_isalnum.c -o $(OBJECTS_FLD)/ft_isalnum.o

$(OBJECTS_FLD)/ft_isalpha.o : $(SOURCES_FLD_1)/ft_isalpha.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_isalpha.c -o $(OBJECTS_FLD)/ft_isalpha.o

$(OBJECTS_FLD)/ft_isascii.o : $(SOURCES_FLD_1)/ft_isascii.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_isascii.c -o $(OBJECTS_FLD)/ft_isascii.o

$(OBJECTS_FLD)/ft_isdigit.o : $(SOURCES_FLD_1)/ft_isdigit.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_isdigit.c -o $(OBJECTS_FLD)/ft_isdigit.o

$(OBJECTS_FLD)/ft_isprint.o : $(SOURCES_FLD_1)/ft_isprint.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_isprint.c -o $(OBJECTS_FLD)/ft_isprint.o

$(OBJECTS_FLD)/ft_itoa.o : $(SOURCES_FLD_1)/ft_itoa.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_itoa.c -o $(OBJECTS_FLD)/ft_itoa.o

$(OBJECTS_FLD)/ft_itoa_base.o : $(SOURCES_FLD_1)/ft_itoa_base.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_itoa_base.c -o $(OBJECTS_FLD)/ft_itoa_base.o

$(OBJECTS_FLD)/ft_lstadd.o : $(SOURCES_FLD_1)/ft_lstadd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstadd.c -o $(OBJECTS_FLD)/ft_lstadd.o

$(OBJECTS_FLD)/ft_lstdel.o : $(SOURCES_FLD_1)/ft_lstdel.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstdel.c -o $(OBJECTS_FLD)/ft_lstdel.o

$(OBJECTS_FLD)/ft_lstdelone.o : $(SOURCES_FLD_1)/ft_lstdelone.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstdelone.c -o $(OBJECTS_FLD)/ft_lstdelone.o

$(OBJECTS_FLD)/ft_lstiter.o : $(SOURCES_FLD_1)/ft_lstiter.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstiter.c -o $(OBJECTS_FLD)/ft_lstiter.o

$(OBJECTS_FLD)/ft_lstlast.o : $(SOURCES_FLD_1)/ft_lstlast.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstlast.c -o $(OBJECTS_FLD)/ft_lstlast.o

$(OBJECTS_FLD)/ft_lstlen.o : $(SOURCES_FLD_1)/ft_lstlen.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstlen.c -o $(OBJECTS_FLD)/ft_lstlen.o

$(OBJECTS_FLD)/ft_lstmap.o : $(SOURCES_FLD_1)/ft_lstmap.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstmap.c -o $(OBJECTS_FLD)/ft_lstmap.o

$(OBJECTS_FLD)/ft_lstnadd.o : $(SOURCES_FLD_1)/ft_lstnadd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstnadd.c -o $(OBJECTS_FLD)/ft_lstnadd.o

$(OBJECTS_FLD)/ft_lstnew.o : $(SOURCES_FLD_1)/ft_lstnew.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_lstnew.c -o $(OBJECTS_FLD)/ft_lstnew.o

$(OBJECTS_FLD)/ft_memalloc.o : $(SOURCES_FLD_1)/ft_memalloc.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memalloc.c -o $(OBJECTS_FLD)/ft_memalloc.o

$(OBJECTS_FLD)/ft_memccpy.o : $(SOURCES_FLD_1)/ft_memccpy.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memccpy.c -o $(OBJECTS_FLD)/ft_memccpy.o

$(OBJECTS_FLD)/ft_memchr.o : $(SOURCES_FLD_1)/ft_memchr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memchr.c -o $(OBJECTS_FLD)/ft_memchr.o

$(OBJECTS_FLD)/ft_memcmp.o : $(SOURCES_FLD_1)/ft_memcmp.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memcmp.c -o $(OBJECTS_FLD)/ft_memcmp.o

$(OBJECTS_FLD)/ft_memcpy.o : $(SOURCES_FLD_1)/ft_memcpy.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memcpy.c -o $(OBJECTS_FLD)/ft_memcpy.o

$(OBJECTS_FLD)/ft_memdel.o : $(SOURCES_FLD_1)/ft_memdel.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memdel.c -o $(OBJECTS_FLD)/ft_memdel.o

$(OBJECTS_FLD)/ft_memmove.o : $(SOURCES_FLD_1)/ft_memmove.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memmove.c -o $(OBJECTS_FLD)/ft_memmove.o

$(OBJECTS_FLD)/ft_memset.o : $(SOURCES_FLD_1)/ft_memset.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_memset.c -o $(OBJECTS_FLD)/ft_memset.o

$(OBJECTS_FLD)/ft_putchar.o : $(SOURCES_FLD_1)/ft_putchar.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putchar.c -o $(OBJECTS_FLD)/ft_putchar.o

$(OBJECTS_FLD)/ft_putchar_fd.o : $(SOURCES_FLD_1)/ft_putchar_fd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putchar_fd.c -o $(OBJECTS_FLD)/ft_putchar_fd.o

$(OBJECTS_FLD)/ft_putendl.o : $(SOURCES_FLD_1)/ft_putendl.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putendl.c -o $(OBJECTS_FLD)/ft_putendl.o

$(OBJECTS_FLD)/ft_putendl_fd.o : $(SOURCES_FLD_1)/ft_putendl_fd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putendl_fd.c -o $(OBJECTS_FLD)/ft_putendl_fd.o

$(OBJECTS_FLD)/ft_putnbr.o : $(SOURCES_FLD_1)/ft_putnbr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putnbr.c -o $(OBJECTS_FLD)/ft_putnbr.o

$(OBJECTS_FLD)/ft_putnbr_fd.o : $(SOURCES_FLD_1)/ft_putnbr_fd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putnbr_fd.c -o $(OBJECTS_FLD)/ft_putnbr_fd.o

$(OBJECTS_FLD)/ft_putnbr_l.o : $(SOURCES_FLD_1)/ft_putnbr_l.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putnbr_l.c -o $(OBJECTS_FLD)/ft_putnbr_l.o

$(OBJECTS_FLD)/ft_putstr.o : $(SOURCES_FLD_1)/ft_putstr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putstr.c -o $(OBJECTS_FLD)/ft_putstr.o

$(OBJECTS_FLD)/ft_putstr_fd.o : $(SOURCES_FLD_1)/ft_putstr_fd.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_putstr_fd.c -o $(OBJECTS_FLD)/ft_putstr_fd.o

$(OBJECTS_FLD)/ft_strcat.o : $(SOURCES_FLD_1)/ft_strcat.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strcat.c -o $(OBJECTS_FLD)/ft_strcat.o

$(OBJECTS_FLD)/ft_strchr.o : $(SOURCES_FLD_1)/ft_strchr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strchr.c -o $(OBJECTS_FLD)/ft_strchr.o

$(OBJECTS_FLD)/ft_strclr.o : $(SOURCES_FLD_1)/ft_strclr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strclr.c -o $(OBJECTS_FLD)/ft_strclr.o

$(OBJECTS_FLD)/ft_strcmp.o : $(SOURCES_FLD_1)/ft_strcmp.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strcmp.c -o $(OBJECTS_FLD)/ft_strcmp.o

$(OBJECTS_FLD)/ft_strcpy.o : $(SOURCES_FLD_1)/ft_strcpy.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strcpy.c -o $(OBJECTS_FLD)/ft_strcpy.o

$(OBJECTS_FLD)/ft_strdel.o : $(SOURCES_FLD_1)/ft_strdel.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strdel.c -o $(OBJECTS_FLD)/ft_strdel.o

$(OBJECTS_FLD)/ft_strdup.o : $(SOURCES_FLD_1)/ft_strdup.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strdup.c -o $(OBJECTS_FLD)/ft_strdup.o

$(OBJECTS_FLD)/ft_strequ.o : $(SOURCES_FLD_1)/ft_strequ.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strequ.c -o $(OBJECTS_FLD)/ft_strequ.o

$(OBJECTS_FLD)/ft_striter.o : $(SOURCES_FLD_1)/ft_striter.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_striter.c -o $(OBJECTS_FLD)/ft_striter.o

$(OBJECTS_FLD)/ft_striteri.o : $(SOURCES_FLD_1)/ft_striteri.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_striteri.c -o $(OBJECTS_FLD)/ft_striteri.o

$(OBJECTS_FLD)/ft_strjoin.o : $(SOURCES_FLD_1)/ft_strjoin.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strjoin.c -o $(OBJECTS_FLD)/ft_strjoin.o

$(OBJECTS_FLD)/ft_strlcat.o : $(SOURCES_FLD_1)/ft_strlcat.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strlcat.c -o $(OBJECTS_FLD)/ft_strlcat.o

$(OBJECTS_FLD)/ft_strlen.o : $(SOURCES_FLD_1)/ft_strlen.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strlen.c -o $(OBJECTS_FLD)/ft_strlen.o

$(OBJECTS_FLD)/ft_strmap.o : $(SOURCES_FLD_1)/ft_strmap.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strmap.c -o $(OBJECTS_FLD)/ft_strmap.o

$(OBJECTS_FLD)/ft_strmapi.o : $(SOURCES_FLD_1)/ft_strmapi.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strmapi.c -o $(OBJECTS_FLD)/ft_strmapi.o

$(OBJECTS_FLD)/ft_strncat.o : $(SOURCES_FLD_1)/ft_strncat.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strncat.c -o $(OBJECTS_FLD)/ft_strncat.o

$(OBJECTS_FLD)/ft_strncmp.o : $(SOURCES_FLD_1)/ft_strncmp.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strncmp.c -o $(OBJECTS_FLD)/ft_strncmp.o

$(OBJECTS_FLD)/ft_strncpy.o : $(SOURCES_FLD_1)/ft_strncpy.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strncpy.c -o $(OBJECTS_FLD)/ft_strncpy.o

$(OBJECTS_FLD)/ft_strnequ.o : $(SOURCES_FLD_1)/ft_strnequ.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strnequ.c -o $(OBJECTS_FLD)/ft_strnequ.o

$(OBJECTS_FLD)/ft_strnew.o : $(SOURCES_FLD_1)/ft_strnew.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strnew.c -o $(OBJECTS_FLD)/ft_strnew.o

$(OBJECTS_FLD)/ft_strnstr.o : $(SOURCES_FLD_1)/ft_strnstr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strnstr.c -o $(OBJECTS_FLD)/ft_strnstr.o

$(OBJECTS_FLD)/ft_strrchr.o : $(SOURCES_FLD_1)/ft_strrchr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strrchr.c -o $(OBJECTS_FLD)/ft_strrchr.o

$(OBJECTS_FLD)/ft_strsplit.o : $(SOURCES_FLD_1)/ft_strsplit.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strsplit.c -o $(OBJECTS_FLD)/ft_strsplit.o

$(OBJECTS_FLD)/ft_strstr.o : $(SOURCES_FLD_1)/ft_strstr.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strstr.c -o $(OBJECTS_FLD)/ft_strstr.o

$(OBJECTS_FLD)/ft_strsub.o : $(SOURCES_FLD_1)/ft_strsub.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strsub.c -o $(OBJECTS_FLD)/ft_strsub.o

$(OBJECTS_FLD)/ft_strtrim.o : $(SOURCES_FLD_1)/ft_strtrim.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_strtrim.c -o $(OBJECTS_FLD)/ft_strtrim.o

$(OBJECTS_FLD)/ft_tolower.o : $(SOURCES_FLD_1)/ft_tolower.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_tolower.c -o $(OBJECTS_FLD)/ft_tolower.o

$(OBJECTS_FLD)/ft_toupper.o : $(SOURCES_FLD_1)/ft_toupper.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_toupper.c -o $(OBJECTS_FLD)/ft_toupper.o

$(OBJECTS_FLD)/ft_wputchar.o : $(SOURCES_FLD_1)/ft_wputchar.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_1)/ft_wputchar.c -o $(OBJECTS_FLD)/ft_wputchar.o

$(OBJECTS_FLD)/ft_con.o : $(SOURCES_FLD_2)/ft_con.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_con.c -o $(OBJECTS_FLD)/ft_con.o

$(OBJECTS_FLD)/ft_con_sc.o : $(SOURCES_FLD_2)/ft_con_sc.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_con_sc.c -o $(OBJECTS_FLD)/ft_con_sc.o

$(OBJECTS_FLD)/ft_convers.o : $(SOURCES_FLD_2)/ft_convers.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_convers.c -o $(OBJECTS_FLD)/ft_convers.o

$(OBJECTS_FLD)/ft_param_make.o : $(SOURCES_FLD_2)/ft_param_make.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_param_make.c -o $(OBJECTS_FLD)/ft_param_make.o

$(OBJECTS_FLD)/ft_precis.o : $(SOURCES_FLD_2)/ft_precis.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_precis.c -o $(OBJECTS_FLD)/ft_precis.o

$(OBJECTS_FLD)/ft_printf.o : $(SOURCES_FLD_2)/ft_printf.c $(HEADERS_1)
	$(CC) -I $(HEADERS_FLD_1) $(CFLAGS) -c $(SOURCES_FLD_2)/ft_printf.c -o $(OBJECTS_FLD)/ft_printf.o
