
#include <stdio.h>

int main()
{
    
    float nota1, nota2, media;
    
    printf("--CÁLCULO DE MÉDIA DAS NOTAS DOS ALUNOS :) --\n\n");
    
    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);
    
    printf("Digite a segunda nota\n");
    scanf("%f",&nota2);
    
    media= (nota1 + nota2) /2;
   
    printf("---------------------RESULTADO------------------------\n\n");
    printf("\nA média da notas é: %.2f",media);

    return 0;
}
