#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    fp = fopen("entrada.txt", "wt"); // Caso o arquivo não exista ele cria devido o w
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    printf("Arquivo criado!\n");
    if(fclose(fp) == 0){
        printf("Arquivo fechado com sucesso! \n");
    }

    return 0;
}