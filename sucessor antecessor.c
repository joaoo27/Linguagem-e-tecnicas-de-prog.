#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	
	printf("insira o valor de N ");
	scanf("%d", &n);
	
	printf("sucessor %d, antecessor %d", n - 1, n + 1);
	
	return 0;
}
