#include <stdio.h> 

int main () {

    // SOMA 
    int minhaidade = 20; 
    int idadepai = 50;
    int idademae = 60;
    
    // Declarei as variaveis e fiz a soma
    int idadetotal = minhaidade + idadepai + idademae; 
    printf(" %i\n", idadetotal); // Coloquei o \n para o proximo resultado ir para a linha de baixo


    // MULTIPLICAÇÃO 
    // Como os valores continuam 20, 50 e 60, não preciso atualizar minhaidade, idadepai e idademae.
    // Apenas reutilizo as variáveis sem o "int" na frente!
    idadetotal = minhaidade * idadepai * idademae; 
    printf(" %i\n", idadetotal);


    // SUBTRAÇÃO 
    // Atualizando os valores (sem o "int")
    minhaidade = 100; 
    idadepai = 50;
    idademae = 20;
    
    idadetotal = minhaidade - idadepai - idademae; 
    printf("%i\n", idadetotal);


    // DIVISÃO 
    minhaidade = 200; 
    idadepai = 10;
    idademae = 10;
    
    // Criei uma NOVA variavel float, porque idadetotal já era int
    float divisaototal = minhaidade / idadepai / idademae; 
    
    // Usei %f porque a variavel divisaototal é do tipo float
    printf(" %f\n", divisaototal);

    return 0;
}