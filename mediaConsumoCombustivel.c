
#include <stdio.h>

int main(){
    
    float dist, litr, mediaConsumo;
    
    printf("--CONSUMO MÉDIO DO AUTOMÓVEL--\n\n");
    
    printf("Informe a distância percorrida:\n");
    scanf("%f",&dist);
    
    printf("----------------------------------------\n");
    
    printf("Informe a quantidade de litros gasto:\n");
    scanf("%f",&litr);
    
    printf("----------------------------------------\n");
    
    mediaConsumo= dist/litr;
   
    printf("\n\a----------------CONSUMO MÉDIO------------------------\n\n");
    printf("\nO consumo médio do automóvel é: %.2f",mediaConsumo);

    return 0;
}
