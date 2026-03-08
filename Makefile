NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
# creates, modifies, and extracts from archives.
# libft is a static library (.a), you don't "link" it with cc -o. You archive it using ar rcs.
AR = ar rcs
RM = rm -f
# wildcard allows multiple files that follow a pattern (.c) for all src files.
# An archive is a single file holding a collection of other files in a structure that makes it possible to retrieve the original individual files (called members of the archive).
SRC = 	ft_strlen.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strlcpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strdup.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_bzero.c \
		
# Object cards are intermediate files that can be linked together to produce an executable program or library.
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# REMOVES OBJ FILES
clean:
	echo "Removing all the object files (.o)"
	$(RM) $(OBJS)

# REMOVES OBJ FILES AND LIBRARY
fclean: clean
	echo "Removing all the object files and libraries (all .o and .c)"
	$(RM) $(NAME)

# REBUILD LIBRARY FROM SCRATCH
re: fclean all

.PHONY: all clean fclean re