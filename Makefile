NAME:=server
TARGET_DIR:=target

all: $(NAME) run

$(TARGET_DIR):
	mkdir $(TARGET_DIR)

$(NAME): $(TARGET_DIR) 
	gcc -o $(TARGET_DIR)/$(NAME) $(NAME).c

run:
	./$(TARGET_DIR)/$(NAME)

