//GML38 - Consistencia de data
//Gabriel Mechi Lima - 08/04/2024
/*Entrar com um data no formato DD/MM/AAAA
verificar se a data esta correta indicandpo 
todos os erros que possui
(o ano deve ser apartir de 1600)
os meses: 4, 6, 9, 11 possuem 30 dias
verificar os anos bissextos
informar tambem se a data esta correta
reciclar e sair somente quando for digitado 0/0/0
veja o programa 21*/

#include<iostream>
main()
{
	int d, m, a;
	int ultdia;
	
	
    do 
    {
	printf("\nDigite uma data DD/MM/AAAA(0/0/0 para sair):   ");
	scanf("%d/%d/%d", &d, &m, &a);
	 
	 if (d == 0 && m == 0 && a == 0)
	     break;
	     
     if(a < 1600 || a > 1000)
	     printf("Ano invalido\n");
     if(m < 1 || m > 12)
         printf("Mes invalido\n");
     ultdia = 31;
     if(m == 4 || m == 6 || m == 9 ||m == 11)
         ultdia = 30;
     if(m == 2)
        {
		 if (((a%4 == 0) && (a%4 != 100)) || (a%400 == 0))
		  ultdia = 29;
		  
         else 
          ultdia = 28;
	    }
     if(d < 1 || d > ultdia)
         printf("Dia invalido\n");
        
     if(a >= 1600 && a <= 10000 && m >= 1 && m <= 12 && d >= 1 && d <= ultdia)
         printf("Data correta\n");
     
     
    }

	while(1);
	
	
	
	
	
	
	
	

	
	
	
}