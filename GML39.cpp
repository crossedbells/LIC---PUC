//GML39 - Teste de numeros primos 
//Gabriel Mechi Lima - 10/04/2024
/*Entrar um inteiro positivio qualquer e 
verificar se é numero primo (nao aceitar numeros negativos)
numero primo: é aquele que é somente divisivel por ele mesmo e pela unidade 
se o numero nao for primo, indicar o porque
DICA: os numeros 1 e 2 são primos
DICA: se o numero for negativo, avisa e retornar com o comando "continue"
DICA:^se o numero nao for primo indicar que ele é divisivel pelo menos por um*/

#include<iostream>
main()
{
	int num, i;
	int ok;
	
	do
	{
	  printf("Digite um numero para descobrir se e primo(inteiro positivo)(zeros para sair):   ");
	  scanf("%d", num);
	  
	if(num<0)
	  {
	  	printf("Digite apenas numeros positivos\n");
	  	continue; //retorna ao incio do bolco de codigo da instrução "do"
	   }
	 if(num == 0)
	    break;   //sai do bloco de digitação da instrução "do"
	    
//incia considerando que o numero testado é PRIMO
		
     ok = 1;
//testar a partir do numero 3	 
	 if(num >= 3)  //percorre todas as visisoes para testar se existe alguma divisibilidade
	  {
	  	for (i = 2; i <= num/2 ; i++)
	  	{                                    //verificar se num é divisivel por 2
	  		
	  	if(num % i == 0)
	  	{ ok = 0;
	  	  break;
		}
	  		
	  		
		  }
	  	
	  	
	  	
	  	
	  	
		  }	
		
		
	}
	 if(ok == 1)
	   printf("o numero %d\t E PRIMO", num);
	 else
	 { 
	   printf("o numero %d\t NAO PRIMO   ", num);
	   printf("(porque o numero e divisivel pelo menos por %d\n", i);
     }
	
	
	while (num != 0);
	
	
	
	
	
	
	
	
	
}