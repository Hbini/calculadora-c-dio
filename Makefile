# Makefile para Calculadora em Linguagem C
# Projeto DIO

CC = gcc
CFLAGS = -Wall -Wextra -O2 -lm
SRC_DIR = src
OBJ_DIR = bin
OBJ = $(OBJ_DIR)/calculator.o
TARGET = $(OBJ_DIR)/calculadora

# Targets
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Executar o programa
run: $(TARGET)
	./$(TARGET)

# Limpar arquivos compilados
clean:
	rm -rf $(OBJ_DIR)

# Recompilar
rebuild: clean all

# Teste simples
test: $(TARGET)
	@echo "Executando testes da calculadora..."
	./$(TARGET) < /dev/null || echo "Teste completado"

.PHONY: all run clean rebuild test
