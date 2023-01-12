
NAME	=	lstft.a

SRC_DIR	=	./src/

OBJ_DIR	=	./.obj/

INC_DIR	=	./include/

LIST_SRC	=	ft_create_lst.c ft_delete_lst.c ft_newnode.c \
				ft_lstlen.c ft_isempty.c ft_push.c ft_pop.c\
				ft_putnbr_fd.c ft_print_lst.c\
				ft_push_swap_op_helper.c ft_push_swap_op_1.c \
				ft_push_swap_op_2.c ft_push_swap_op_3.c

LIST_OBJ	=	$(LIST_SRC:.c=.o)

LIST_INC	=	lstft.h

SRC		=	$(addprefix $(SRC_DIR), $(LIST_SRC))

OBJ		=	$(addprefix $(OBJ_DIR), $(LIST_OBJ))

INC		=	$(addprefix $(INC_DIR), $(LIST_INC))

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME)	:	$(OBJ_DIR) $(OBJ) $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR) : 
	mkdir -p $(OBJ_DIR)

clean : 
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: clean fclearn re all	

