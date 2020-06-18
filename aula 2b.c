#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
 	setlocale(LC_ALL, "portuguese");
 	
 	int opcao;
 	float primeiro_numero, segundo_numero, resultado;
 	
 	printf("digite 1 para somar\n");
 	printf("digite 2 para multiplicar\n");
 	printf("digite 3 para subtrair\n");
 	printf("digite 4 para dividir\n");
 	printf("Escolha uma opção:");
	scanf("%d", &opcao);
	 
	printf("digite o primeiro numero: ");
	scanf("%f", &primeiro_numero);
	 
	printf("digite o segundo numero: ");
	scanf("%f", &segundo_numero);
	
	if (opcao == 1) { 
		resultado = primeiro_numero + segundo_numero;
	}
	if (opcao == 2) { 
		resultado = primeiro_numero * segundo_numero;
	}
	if (opcao == 3) { 
		resultado = primeiro_numero - segundo_numero;
	}
	if (opcao == 4) { 
		resultado = primeiro_numero / segundo_numero;
	}
	printf("O seu resultado é: %.2f", resultado);
} 
