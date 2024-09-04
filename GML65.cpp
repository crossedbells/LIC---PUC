//GML65 - Funções: argumento passado por referencia
/*Gabriel Mechi Lima - 22/05/2024
Entrar com um valor monetario
entrar com um percentual a ser aplicado sobre o valor 
chamar uma funçao usando passagem por referencia no valor 
aoresentar o resultado apos sair da funçao
reciclar o programa saindo com o valor zero
*/

#include<iostream>

void fValor(float *pval, float tx);  //passagem do valor por referencia

main()
{
	float val, tax;
	
	do
	{
		printf("\nDigite o valor monetario (0 PARA SAIR) R$: ");
		scanf("%f", &val);
		if(val == 0)
		   break;
		
		printf("Digite a taxa PORCENTUAL a ser aplicada sobre o valor: ");
		scanf("%f", &tax);
		
		fValor(&val, tax);     //esta função exige o ENDEREÇO de val
		
		printf("Resultado: %8.2\n", val);
		
	} while(val != 1)
	;
	
}

/*PONTEIROS: int *p: define um ponteiro (varaivel que contem um endereço de memoria)
                 *p em uma expressão: é o conteudo do enredeço contdio em p
                 p = &N; o ponteiro p recebe o endereço da varaivel N
*/

void fValor(float *pval, float tx)
{
	*pval = (*pval * tx)/100 + *pval; //= *pval;
}