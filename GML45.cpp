//GML45 - Geraçao de uma string invertida
/*Gabriel Mechi Lima - 23/04/2024
Entrar com uma string de ate 100 caracteres
e gerar outra string invertida*/

#include<iostream>
main()
{
	char text[100];    /*tipo agregado homogeneo (so contem tipo caracter)
	                    indexados de 0 a 99
						SE FOR UMA STRING, ultimo caracter sera '\0' (NULL)
						a responsabilidade de nao ultrapasar o limite é do programador!!!*/
	
	char inv[100];
	
	int i, j;
	
	

		printf("Digite um texto qualquer:    ");
		gets(text);
		printf("%s\n", text);
        
        i=0;    //indice
        
		for(i; text[i] != '\0'; i++);   //o meio é uma condição(instrução logica) & o final incremento; posicionar no final da string digitada
		
        	inv[j] = text[i];
        	i--;
     
     
        for(j=0; i >= 0; j++)
    {
        inv[j] = text[i];
        i--;	
	}
  
    inv[j] = '\0'; //indicador		
		
	puts(inv); //ou printf("%s\n", Inv);	
}
		

	
	
