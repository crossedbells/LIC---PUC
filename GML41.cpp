//GML41 - Vetor com seleção
/*Gabriel Mechi Lima - 10/04/2024
Entrar com 20 numeros inteiros quaisquer e depois:
apresenta-los separando os pares e os impares*/

#include<iostream>
main()
{
	int v[20];
	int i;
	
	for(i=0; i < 20; i++)
	{
		printf("%d Digite um numero inteiro qualquer:  ", i+1);
		scanf("%d", &v[i]);

	 }
	
	printf("\nNumeros pares:\n");
    for(i=0; i < 20; i++)
    if(v[i] % 2 == 0)
	   printf("%d\t", v[i]);
	   
	   printf("\n");
   
    printf("\nNumeros impares:\n");
    for(i=0; i < 20; i++)
	if(v[i] % 2 != 0)
	   printf("%d\t", v[i]);
	   
       printf("\n");
}
    
	
	
	
	