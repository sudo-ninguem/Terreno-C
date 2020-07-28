#include <stdio.h> 


int main (){


    double largura, comprimento, valor_metro; 
    double area, valor; 

    printf ("\n Digite a largura do terreno: ");
    scanf ("%lf", &largura); 

    printf ("\n Digite o comprimento do terreno: "); 
    scanf ("%lf", &comprimento); 

    printf ("\n Digite o valor do metro quadrado: ");
    scanf ("%lf", &valor_metro); 

    area = largura * comprimento; 

    valor = area * valor_metro; 

    printf (" \n A área do terreno é de: %.2lf", area);
    printf ("\n O valor do terreno é: %.2lf", valor); 


    return 0; 
}