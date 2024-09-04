//GML64 - Funções: passagens de parametris 
/*Gabriel Mechi Lima - 22/05/2024
Testar as 2 formas de passar parametros para as funções:
por valor e por referencia
*/

#include<iostream>

void funcDobra1valor(int n1, int n2);   //passagem por valor
void funcDobra2ref(int *pn1, int *pn2);   //passagem por referencia

/*PONTEIROS: int *p: define um ponteiro (varaivel que contem um endereço de memoria)
                 *p em uma expressão: é o conteudo do enredeço contdio em p
                 p = &N; o ponteiro p recebe o endereço da varaivel N
                 

*/

main()
{
	int A, B;
	
	printf("Teste de passagem de parametros\n");
	printf("Digite um valor inteiro para A: ");
	scanf("%d", &A);
	printf("Digite um valor inteiro para B agora: ");
	scanf("%d", &B);
	
	printf("\n\nPassagem por valor\n") ;
	funcDobra1valor(A, B);
	printf("Apos a funcao funcDobra1valor com passagem por valor temos:\n ");
	printf("A = %d\tB = %d\n", A, B);
	
	printf("\n\nPassagem por referencia\n");
	funcDobra2ref(&A, &B);     //essa função EXIGE o ENDEREÇO das variaveis A e B
	printf("Apos a funcDobra2ref com passagem por referencia temos:\n");
	printf("A = %d\tB = %d\n", A, B);
	
}
void funcDobra1valor(int n1, int n2)    //passagem, por referencia
{
	n1 = n1 * 2;
	n2 = n2 * 2;
	printf("Dentro da funcao funcDobra1valor com passagem por valor temos:\n");
	printf("n1 = %d\tn2 = %d\n", n1, n2);
		
}

void funcDobra2ref(int *pn1, int *pn2)       //passagem por referencia
{
	*pn1 = *pn1 * 2;        //PERIGO! Nunca faça: pn1 = pn1 * 2, isso altera areas desconhecidas!
	*pn2 = *pn2 * 2;
	printf("Dentro da funcDobra2ref os valores sao dobrados: ");
	printf("*pn1 = %d\t*pn2 = %d\n", *pn1, *pn2);
    printf("*pn1 = %d\t*pn2 = %d <----PERIGO\n", pn1, pn2);

}