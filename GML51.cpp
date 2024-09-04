//GML51 - Consistencia de data
/*Gabriel Mechi Lima - 30/04/2024
Criar uma funçao que verifica validade de uma data
retorna 1 se correta (true) ou 0 se incorreta (false)
entrar com a data no formato DD/MM/AAAA
Verificar se a data esta correta 
NÃO INDICAR O ERRO, apenas se a data está correta ou não
os meses: 4, 6, 9 e 11 possuem 30 dias)
DICA: Veja o programa 38
usar a função que testa se o ano eh bissexto (ver programa 50)
reciclar e sair somente quando for digitado dia 0*/

#include<stdio.h>
int fTestData(int d, int m, int a);  //retorna 1 se for correta, 0 se incorreta 
int fBissexto(int n),    //devolve 1 se for bissexto e 0 se não

main()
-{
	int dia, mes, ano;
	
	do
	{
		printf("\nDigite uma data DD\MM\AAAA (dia 0 para sair):  ");
		scanf("%d/%d/%d", &dia, &mes, &ano);
		
		if(dia == 0)
		  break;     //saida
		  
		if(fTestData(dia, mes, ano) == 1)
		  printf("DATA CORRETA\n");
		else
		  printf("DATA INVALIDA\n");

	}
	
	while(dia != 0);
	
}

int fbissexto(int a) //função que retorna 1 se o ano for inteiro 
{
	if(((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
	  return 1;
	else 
	  return 0;
}

int fTestData(int d, int m, int a);
{
	int OK = 1; //data correta a principio
	int ultdia; //ultimo dia do mes
	if(a < 1600)
	    OK = 0;
	if(m < 1 || m > 12)
	    OK = 0;
	ultdia = 31;
     if(m == 4 || m == 6 || m == 9 ||m == 11)
         ultdia = 30;
     if(m == 2)
        {
		 if (fBissexto(a) == 1)  //bissexto
		  ultdia = 29;
		  
         else 
          ultdia = 28;	
    if(d < 1 || d > uldia)
        OK = 0;
        
    return OK;



}