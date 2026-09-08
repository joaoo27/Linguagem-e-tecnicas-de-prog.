#include <stdio.h>
#include <stdlib.h>

int main() {

    int cpf[11];
    int soma = 0;
    int resto;
    int digito1;
    int digito2;

    printf("Insira seu CPF: ");

    for(int i = 0; i < 11; i++) {
        scanf("%1d", &cpf[i]);
    }

    for(int i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }

    resto = (soma * 10) % 11;

    if(resto == 10) {
        resto = 0;
    }

    digito1 = resto;

    soma = 0;

    for(int i = 0; i < 10; i++) {
        soma += cpf[i] * (11 - i);
    }

    resto = (soma * 10) % 11;

    if(resto == 10) {
        resto = 0;
    }

    digito2 = resto;

    if(cpf[9] == digito1 && cpf[10] == digito2) {
        printf("CPF Valido\n");
    }
    else {
        printf("CPF Invalido\n");
    }

    return 0;
}