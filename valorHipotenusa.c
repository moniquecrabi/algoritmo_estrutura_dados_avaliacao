#include <stdio.h>
#include <math.h>

int main() {
    
    float catetoA, catetoB, hipotenusa;

    
    printf("---- CALCULAR VALOR HIPOTENUSA (RETANGULO)----------\n\n");
    
    printf("Digite a medida do cateto A: ");
    scanf("%f", &catetoA);

    printf("Digite a medida do cateto B: ");
    scanf("%f", &catetoB);

    
    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);
    
    printf("\n---- RESULTADO ----\n\n");


    printf("\nA medida da hipotenusa é %.2f.\n", hipotenusa);

    return 0;
}
