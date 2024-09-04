//GML13 - Entrada de 3 numeros pontio flutuante ou ecolunamento
//Gabriel Mechi Lima - 20/03/2024
/*apresentar os numeros com apenas 2 casas decimais
1. separados por tabulaçao
2. encolunados com o ponto principal decimal alinhado apesentando sua soma
3. idem com 5 casas decimais
*/

#include<iostream>

main()
{
	float n1, n2, n3;
	
	printf("Digite 3 numeros pontos flutuante, separados por espaco:    ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
    printf("Voce digitou: %.2f\t %.2f\t %.2f\n", n1, n2, n3);
    
    printf("\nSomando\n%10.2f\n%10.2f\n%10.2f\n", n1, n2, n3);
    
    printf("----------------\n");
    printf("%10.2f\n", n1+n2+n3);
    
    printf("\nSomando\n%10.5f\n%10.5f\n%10.5f\n", n1, n2, n3);
     
    printf("----------------\n");
    printf("%10.5f\n\n", n1+n2+n3);
     
   	system("pause");
	
}
