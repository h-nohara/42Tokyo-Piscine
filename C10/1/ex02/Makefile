CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

TARGET = ft_tail
SOURCES = ft_tail.c helper.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
		$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $<

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(TARGET)

re: fclean all
