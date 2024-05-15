#include <stdio.h>

int main() {
float nota1;
float nota2;
float nota3;
float nota4;

printf("digite a primeira nota: ");
scanf("%f", &nota1);
printf("digite a primeira nota: "); 
scanf("%f", &nota2);
printf("digite a primeira nota: "); 
scanf("%f", &nota3);
printf("digite a primeira nota: ");
scanf("%f", &nota4);

float total = nota1+nota2+nota3+nota4;

printf(" nota total: %f", total);

return 0;
}
