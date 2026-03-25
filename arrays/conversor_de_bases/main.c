/*
	Estudo de arrays com um simples conversor de base 10 para base 2 e 16
	@author: Mateus 'oestrangeiro' Almeida
	@date: 25/03/2026
*/

#include <stdio.h>

#define MAX_CHARACTERS_CONVERTED 64


int main(int argc, char *argv[]){

	const char baseCharacters[] = {
		'0', '1', '2', '3', '4',
		'5', '6', '7', '8', '9',
		'A', 'B', 'C', 'D', 'E', 'F'
	};

	long int numConverted[MAX_CHARACTERS_CONVERTED];
	int index = 0;
	int num, base;

	printf("Número: ");
	scanf("%d", &num);
	printf("Base: ");
	scanf("%d", &base);


	do {
		/*
			Caso fique confuso esse trecho de código,
			recomendo que quem estiver lendo isso pesquise
			pelo algoritmo de conversão de número na base 10
			para binário que comumente aprendemos na faculdade
			para fazermos essa conversão no papel e caneta
		*/ 
		numConverted[index] = num % base;
		num = num / base;
		index++;
		
	}while(num != 0);

	printf(">> ");

	// Aqui, printo o array de trás pra frente
	for(--index; index >= 0; --index){
		printf("%c", baseCharacters[numConverted[index]]);
	}

	printf("\n");

	return 0;
}
