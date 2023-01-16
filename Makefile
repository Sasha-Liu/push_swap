NAME	=	push_swap

SRC_DIR	=	./src/

OBJ_DIR	=	./.obj/

INC_DIR	=	./include/

LIST_SRC	=	push_swap.c ft_is_int.c  ft_init_stack.c \
				ft_quick_sort.c ft_malloc_stack.c\
			   	ft_init_order.c	ft_is_sorted.c ft_sort_three.c utils.c \
				ft_op_required.c

LIST_OBJ	=	$(LIST_SRC:.c=.o)

LIST_INC	=	push_swap.h

SRC		=	$(addprefix $(SRC_DIR), $(LIST_SRC))

OBJ		=	$(addprefix $(OBJ_DIR), $(LIST_OBJ))

INC		=	$(addprefix $(INC_DIR), $(LIST_INC))

LIBFT_DIR	=	libftprintf

LIBFT		=	libftprintf/libftprintf.a

LSTFT_DIR	=	lstft

LSTFT	=	lstft/lstft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME)	:	$(OBJ_DIR) $(OBJ) $(INC) $(LIBFT) $(LSTFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(LSTFT)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INC) 
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR) : 
	mkdir -p $(OBJ_DIR)

$(LIBFT) : $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(LSTFT) : $(LSTFT_DIR)
	$(MAKE) -C $(LSTFT_DIR)

clean : 
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: clean fclearn re all
