//GML29 - Calculadora com menu reclicavel 
/*Gabriel Mechi - 02/04/2024      

Reciclar o seguinte programa
Entrar com dois numeros de tipo flutuante 
Apresentar um menu com as opções:
0 - saida para outro numeros
1 - soma
2 - subtração
3 - multiplicação
4 - divisão
usando o comando switch executar a operação selecionada 
com 4 casas decimais retornado sempre para o menu
Na opção "0" do menu, o programa retorna a pedir os dois numeros inciais.
Sair do programa se ambos os numeros digitados forem zero
*/

#include<iostream>
main()
{
	float n1, n2;
	int op;
	
	do{
		
		printf("Digite dois numeros(zeros para sair):      ");
		scanf("%f %f", &n1, &n2);
		if (n1 == 0 && n2 == 0)
		    break;
		op = -1; //para garantir a entrada no while
		
		    
	    while(op != 0)
	    {
	     printf("\n0 - saida para outro numeros\n");
	     printf("1 - soma\n");
		 printf("2 - subtracao\n");
		 printf("3 - multiplicacao\n");
	  	 printf("4 - divisao\n");
	 	 printf("Digite sua escolha:  ");
	 	 scanf("%d", &op);
	 
	 	
		switch(op) 
		{
		case 0:
			break;
	    case 1:
			printf("%10.4f + %10.4f = %10.4f\n", n1, n2, n1 + n2);
			break;
		case 2:
			printf("%10.4f - %10.4f = 10.4%f\n", n1, n2, n1 - n2);
			break;
		case 3:
			printf("%10.4f * %%10.4f = %10.4f\n", n1, n2, n1 * n2);
			break;
		case 4:
			if (n2 != 0)
              printf("%10.4f / %10.4f\n = %10.4f\n", n1, n2, n1 / n2);			
			else 
			  printf("Nao existe divisao por zero");
	 		break;
	    
		default:
	    	  printf("Opcao invalida\n"); 
	
	    }
	   	
	 }
			
	}
	
     while( n1 != 0 || n2 != 0);	

 	}





















/*case '0'
		0 - saida para outro numeros;
        
		case '1'
		1 - soma;
        
		case '2'
		2 - subtracao;
        
		case '3'
		3 - multiplicacao;
       
	    case '4'
	    4 - divisao;*/