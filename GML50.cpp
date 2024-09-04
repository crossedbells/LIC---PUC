//GML50 - Funçao teste de ano bissexto
/*Gabriel Mechi Lima - 29/04/2024
Criar uma funçao que teste se um ano eh bissexto 
usa essa função de forma recursiva, saindo somente
quando o ano for 0.
O ano deve estar no intervalo de 1600 a 3000
retornar 1 se verdadeiro ou 0 se falso

Um ano eh bissexto quando: 
- é divisivel por 4 E não é divisivel por 1000
OU
é divisivel por 400
DICA: Veja o programa 20 || 38*/

#include <stdio.h>
int fbissexto(int a); //devolve 1 se for bissexto

int main()
{
	int ano;
	
	do
	{
		printf("\nDigite um ano de 1600 a 3000 (0 para sair):   ");
		scanf("%d", &ano);
		if(ano == 0)
		   break;
		if(ano<1600 || ano>3000)
		{
	     printf("Ano invalido\n");
	     continue;
		}
		if(fbissexto(ano) == 1)
		 printf("O ano %d eh bissexto\n", ano);
		else 
		 printf("O ano nao eh bissexto\n");
		
		
		
	}
	
		while (ano != 0);	

}

int fbissexto(int a) //função que retorna 1 se o ano for inteiro 
{
	if(((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
	  return 1;
	else 
	  return 0;


}