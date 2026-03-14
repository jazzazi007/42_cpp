NAME = Fixed

src = Fixed.cpp main.cpp
obj = ${src:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
$(NAME): $(obj)
	$(CC) $(obj) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(obj)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re