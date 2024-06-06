#!/bin/bash

# Define o nome do arquivo de saída
OUTPUT="saida.o"

# Encontra todos os arquivos .cpp no diretório atual
CPP_FILES=$(find . -name "*.cpp")

# Compila cada arquivo .cpp em um arquivo .o
for FILE in $CPP_FILES; do
    g++ -c $FILE -o "${FILE%.cpp}.o"
    if [ $? -ne 0 ]; then
        echo "Erro ao compilar $FILE"
        exit 1
    fi
done

# Encontra todos os arquivos .o no diretório atual
O_FILES=$(find . -name "*.o")

# Liga todos os arquivos .o em um único arquivo de saída
g++ -o $OUTPUT $O_FILES

# Verifica se a ligação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Compilação e ligação bem-sucedidas. Arquivo de saída criado: $OUTPUT"
else
    echo "Erro na ligação."
    exit 1
fi
