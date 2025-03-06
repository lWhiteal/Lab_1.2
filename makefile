# Компилятор
CC = gcc

# Флаги компиляции
CFLAGS = -Wall -Wextra -std=c99 -O2

# Имя исполняемого файла
TARGET = matrix_program

# Исходные файлы
SRCS = main.c matrix.c

# Объектные файлы
OBJS = $(SRCS:.c=.o)

# Правило по умолчанию
all: $(TARGET)

# Сборка исполняемого файла
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Компиляция исходных файлов в объектные
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f $(OBJS) $(TARGET)

# Правило для запуска программы
run: $(TARGET)
	./$(TARGET)

# Указание, что clean и run не являются файлами
.PHONY: clean run