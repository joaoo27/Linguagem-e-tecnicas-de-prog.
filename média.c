#include <stdio.h>
#include <stdlib.h>

int main(){

char nome[50];
double nota1, nota2, nota3, media;

printf("insira o seu nome: ");
scanf("%49[^\n]", nome);

printf("digite as 3 notas:: ");
scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("\nAluno: %s\n", nome);
printf("\nMedia: %.1lf\n", media);

if(media == 6.7){
    printf("FARMOU AURA!\n");
}

else if(media >= 6.0 && media <= 10.0){
    printf("Aprovado!");
}

else if(media >= 4.0 && media < 6.0){
    printf("Exame\n");
    printf("Faltam %1lf pontos para 10.0\n", 10.0 - media);
}

else {
    printf("Reprovado\n");
}

 return 0; 
}
