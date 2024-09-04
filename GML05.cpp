//GML05 - Aritmetica com variaveis do tipo inteiro
//Gabriel Mechi - 06/03/2024

#include <iostream>

main()
{
	int x = 350; //define e carrega a variavel
	int y = 25;
	
	printf("Soma: %d + %d = %d\n\n", x, y, x+y);
	
	printf("Subtracao: %d - %d = %d\n\n", x, y, x-y);
	
	printf("Subtracao: %d - %d = %d\n\n", y, x, y-x);
	
	printf("Multiplicacao: %d x % d = %d\n\n", x, y, x *y);
	
	printf("Divisao: %d / %d = %d\n\n", x,y, x/y);
	
	printf("Resto da divisao: %d / %d = %d\n\n", x, y, x%y);
	
	system("pause");
	
	
}