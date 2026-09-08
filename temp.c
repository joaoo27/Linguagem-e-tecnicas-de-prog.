#include <stdio.h>
#include <stdlib.h>

int main() {

    double temp;
    char grandeza;

printf("digite a temperatura: ");
scanf("%lf",&temp);

printf("escolha a grandeza que deseja converter (C/F): ");
scanf(" %c",&grandeza);

if(grandeza == 'F'){
    temp = (temp * 9/5) + 32;
    printf("%2lf F\n", temp);
}

if(grandeza == 'C'){
    temp = (temp - 32) * 5/9;
    printf("%2lf C\n", temp);
}
return 0;

}