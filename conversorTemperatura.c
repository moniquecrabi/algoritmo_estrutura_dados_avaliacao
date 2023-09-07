#include <stdio.h>

int main() {
    
    float fahr, celsius;

    printf(" --------  FAHRENHEIT EM CELSIUS  --------      \n\n");
    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%f",&fahr);
    
    celsius = (fahr - 32) / 1.8;
 
    
    printf("A temperatura convertida de Fahrenheit para Celsius é: %.2f\n", celsius);

    return 0;
}
