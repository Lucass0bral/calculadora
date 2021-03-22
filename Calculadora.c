#include <stdio.h>

main()
{
    float var1, var2, result1, result2, result3, result4;
    
    printf("Bem-vindo a calculadora");
    printf("\n");
    printf("Digite o primeiro valor: ");
    scanf("%f", &var1);
    printf("Digite o segundo valor: ");
    scanf("%f", &var2);


    result1 = var1+var2;
    result2 = var1-var2;
    result3 = var1*var2;
   	result4 = var1/var2;

    printf("O resultado final da adicao: %f", result1);
    printf("\n");
	printf("O resultado final da subtracao: %f", result2);
	printf("\n");
	printf("O resultado final da multiplicacao: %f", result3);
	printf("\n");
	printf("O resultado final da divisao: %f", result4);
	
	return 0;
}
