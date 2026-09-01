#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char letra;
	
	printf("insira uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
			printf("bora bill!");
		}
		else if(letra == 'i' || letra == 'u'){
			printf("la ele boy");
		}
		else{
			printf("+1000 de aura 67 42 910");
		}
	}
	
	switch (letra){
		case 'a':
			printf("a de AMOR");
			break;
			
			case 'b':
			printf("b de BAIXINHO");
			break;
			
		case 'C':
			printf("C de CORACAO");
			break;
	}
	
	return 0;
}
