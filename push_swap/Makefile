# NAME= push_swap.a
# compiler= cc
# CFLAGS= -Wall -Wextra -Werror

# FUN=  libft	\
# main.c	\

# CON= $(FUN:.c=.o)

# all:	$(NAME)

# $(NAME):	$(CON)
# 	ar r $(NAME) $(CON)

# # %.o : %.c
# # 	$(compiler) $(CFLAGS) -c $?

# clean:	
# 	rm -f $(CON)

# fclean:	clean
# 	rm -f $(NAME)

# re:	fclean all

# ==============

CFLAGS    = -Wall -Wextra -Werror
# LIBC    = ar -rc
RM        = rm -f
CC  = cc
# NAME    = push_swap.a
SRC        = main.c \
ft_atoi.c \
list_outil.c    \
ft_split.c  \
outil_libft.c \
ft_check.c  \
ft_move.c   \
sort_arr.c  \

            # push.c  \
            # rotate.c    \
            # rev_rotate.c    \
            # stack_b.c \
            # push_swap_util.c \
            # check.c \
            # main.c \
            # rotate_ab.c \
            # reverse_ab.c \
            # check_utils.c \
            # check_stack.c \

TARGET= push_swap
OBJ    = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFALGS) $(OBJ) -o $(TARGET) ; $(RM) $(OBJ)

# push_swap: $(NAME)
# 		gcc main.c push_swap.a libft1/libft.a -o $(TARGET)
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re:    fclean all