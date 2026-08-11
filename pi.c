#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main() {
	
	float r, area, B, b, h, areat;
	
	printf("insira o raio R do circulo");
	scanf("%f", &r);
	
	area = pi*(r*r);
	
	printf("A area do circulo de raio R e %f = %f", r, area);
	
	printf("insira o B do trapezio");
	scanf("%f", &B);
	
	printf("insira o b do trapezio");
	scanf("%f", &b);
	
	printf("insira o h do trapezio");
	scanf("%f", &h);
	
	areat = (B+b)*h/2;
	
	printf("a area do trapezio e %f", areat);
	
	return 0;
}
