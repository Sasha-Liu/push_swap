NAME	=	checker

SRC_DIR	=	./src/

OBJ_DIR	=	./.obj/

INC_DIR	=	./include/

LIST_SRC	=	checker.c ft_init_order.c ft_init_stack.c \
				ft_is_int.c ft_malloc_stack.c ft_quick_sort.c \
				ft_check_input.c ft_check_res.c ft_check.c \
				ft_exec_input.c ft_read_input.c ft_set_input.c

LIST_OBJ	=	$(LIST_SRC:.c=.o)

LIST_INC	=	checker.h

SRC		=	$(addprefix $(SRC_DIR), $(LIST_SRC))

OBJ		=	$(addprefix $(OBJ_DIR), $(LIST_OBJ))

INC		=	$(addprefix $(INC_DIR), $(LIST_INC))

LIBFT_DIR	=	../libftprintf

LIBFT		=	../libftprintf/libftprintf.a

LSTFT_DIR	=	../lstft

LSTFT	=	../lstft/lstft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME)	:	$(OBJ_DIR) $(OBJ) $(INC) $(LIBFT) $(LSTFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(LSTFT)
	mv $(NAME) ../

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
