//GML19 - Comparacao entre 5 numeros inteiros 
/*Gabriel Mechi Lima - 21/03/2024
Entrar com 5 numeros inteiros quaisquer (podem ser negativos)
apresentar os 5 numeros considerados,
e dizer qual é o maior e o menor*/

#include<iostream>
main()
{
	int n1, n2, n3, n4, n5;
	int maior, menor;
	
	printf("Digite 5 numeros inteiros separados por espaco:   ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	maior = n1;
	menor = n1;
	
	if(n2>maior)
	  maior = n2;
    
	if (n3>maior)
	  maior = n3;
   
    if (n4>maior)
	  maior = n4;
    
	if (n5>maior)
	  maior = n5;
	
	if (n2<menor)
  	  menor = n2;
    
	if (n3<menor)
	  menor = n3;
   
    if (n4<menor)
	  menor = n4;
    
	if (n5<menor)
	  menor = n5;
	  
	printf("O maior numero e %d e o menor %d\n", maior, menor);

	/*if(n1>n2)  Primeira tentativa
	{
	maior = n1;
	menor = n2;
    } 
	else if(n2>n1)
	{
		maior = n2;
		menor = n1;	
	}
	
	if(n3>maior)
	n3 = maior;
	else if
	{
		n3 = menor;
		
	}
	
	if(n4>maior)
	n4 = maior;
	else if
	{
	    n4 = menor;
		
	}
	
	if(n5>maior)
	n5 = maior;
	else if
	{
		n5 = menor;
		
	} */
	
	
 system("pause");	
	

	}