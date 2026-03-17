#include <stdio.h> 

int main () {

  // Declarações das variaveis 
 int area;
 int base;
 int altura;

 // Pedi para o usuário digitar o valor e armazenei nas respectivas variáveis
  printf("Digite o valor da base: ");
  scanf("%i", &base);

  printf("Digite a altura: ");
  scanf("%i", &altura);

  area =  base*altura;  //calculo da area

  printf (" Valor  da Area %i ", area);


    return 0;
}