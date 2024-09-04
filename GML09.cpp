//GML09 - Calculando notas de aluna
//Gabriel Mechi Lima - 20/03/2024
/*Dadas 3 notas de alunos, calcular a media aritmetica
Mostrar a media dos seguintes casos:
sem edicao de valor
com 1 e 3 casas decimais 
sem casas decimais*/

#include<iostream>
main()
{
	float nota1, nota2, nota3, media;
	
	nota1 = 10;
	nota2 = 8;
	nota3 = 5.5;
	media = nota1 + nota2 + nota3/3;
	
	
	printf("Notas: %f, %f, %f\n\n", nota1, nota2, nota3);
	printf("Media: %f\n\n", media);
	
	printf("Media do aluno (com uma casa decimal): %4.1\n\n", media);
	
	printf("Media do aluno (com tres casas decimal): %4.3\n\n", media);

	printf("Media do aluno (sem casa decimal): %4.0\n\n", media);
	
	
	
	system("pause");

	
	
	
	
	
	
	
	
}