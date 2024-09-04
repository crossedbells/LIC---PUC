//GML53 - Apresentar dos fatorais de 1 a 12
/*Gabriel Mechi Lima - 07/05/2024
Apresentar os 12 fatorais 
Usar a funçao recursiva que calcula o fatorial (programa 52)
 */
 
 #include <stdio.h>
 int FatorialR(int n);  //prototipo de função
 
 main()
 {
 	int i;
 	
 	printf("Calculo dos fatoriais\n\n");
 	
 	for(i=1; i <= 12; i++)
 	{
 		printf("Fatorial de %d:        %2d!\t= %d\n", i, i, FatorialR(i));
	}
 	
 	
 }
 
 int FatorialR(int n)
{
	if(n <= 1)
	      return 1;
	else
	      return n * FatorialR(n-1);
	      
	      
	
	
}