# Compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -pedantic

# Nom de l'exécutable
TARGET = exercice_01

# Fichier source
SRC = exercice_01.c

# Règle principale
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Nettoyage
clean:
	rm -f $(TARGET)
