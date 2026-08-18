#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,b,c, maiortemp, maior;
	
	printf("insira tres valores para identificar o maior ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	maiortemp = ((a + b + abs(a-b))/2);
	
	maior = ((maiortemp+c+abs(maiortemp-c))/2);
	
	printf("o maior valor e %d", maior);
	
	return 0;
}
