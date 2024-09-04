//GML07 - Calcuo da area de um retangulo
//Gabriel Mechi - 06/03/2024
/*Dados os lado de um retangulo (A=b.h),
calcular a sua area e o seu perimetro (soma de todos os lados)
usando variaveis inteiras prorpias para os resultados*/

#include<iostream>

main()
{
	int lado1 = 45;
	int lado2 = 379;
	int area, perimetro;
	
	area = lado1*lado2;
	perimetro = lado1 + lado1 + lado2 + lado2;
	
	printf("Area: %d\n\n", area);
	printf("Perimetro: %d\n\n", perimetro);
	
	
	
	
	
	/*printf("Area: %d = %d x %d\n\n", area = lado1*lado2, lado1, lado2);
	
	printf("Perimetro: %d = %d + %d + %d + %d\n\n", perimetro = lado1 + lado2 + lado1 + lado2, lado1, lado2);
	
    system("pause");*/	
	
}