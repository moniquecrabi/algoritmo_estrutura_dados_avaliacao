#include <stdio.h>

int main() {
    
    char caractere;


    printf(" --------     CARACTERE EM ASCII    --------      \n\n");
    printf("Digite um caractere:\n");
    scanf("%c",&caractere);


   
    printf("\nO código ASCII em decimal de '%c' é: %d\n", caractere, caractere);
    printf("O código ASCII em hexadecimal de '%c' é: %02X\n", caractere, caractere);

    return 0;
}
