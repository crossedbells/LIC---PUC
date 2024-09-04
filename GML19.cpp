//GML20 - Calculadora
/*Gabriel Mechi Lima - 26/03/2024

Digitar 2 numeros inteiros separados por um dos
5 caracteres de operação aritmetica ( + - * / %)
Fazer as devidas constiencias informando os erros:
- se o caracter de operação está correto 
- o caso de que nao existe divisao por zero
Executar o calculo apresentando-o completo na tela
no formato por exemplo: 5 + 3 + 8*/


#include<stdio.h>
main()
{
	int x, y, result;
	char op;  //operação
	
	printf("Digite a expressao aritimetica:   ");
	scanf("%d %c %d", &x, &op, &y);
	
	if ((op != '+') && (op != '-') && (op != '*') && (op != '/') && (op != '%'))
	    printf("Codigo de operacao incorreto\n");
	else if ((op == '/') || (op == '&') && (y == 0))
	    printf("Nao existe divisa por zero\n");
	
	else {                  //passou pelas consistencias e executa a operaçao aritmetica
		if(op == '+')
		 result = x + y;
		
		if(op == '-')
		 result = x + y;
		
	    if(op == '*')
		 result = x * y;
	
		if(op == '/')
		 result = x / y;
        
		if(op == '%')
		 result = x % y;

        printf("%d %c %d = %d\n" , x, op, y, result);

	}
	
	
}
