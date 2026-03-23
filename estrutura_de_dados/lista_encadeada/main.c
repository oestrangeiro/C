/*
	Estudo e implementação de uma lista encadeada simples
	20/03/2026
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Registro {
	int value;
	struct Registro *next;
} Registro;

void InserirNoInicio(Registro **inicioDaLista, int valor);
void DesalocarLista(Registro **lista);

int main(void){

	// Criando a lista
	Registro *listaRegistro = NULL;

	InserirNoInicio(&listaRegistro, 10);
	InserirNoInicio(&listaRegistro, 2310);
	InserirNoInicio(&listaRegistro, 4);
	InserirNoInicio(&listaRegistro, -10);
	InserirNoInicio(&listaRegistro, 99);
	InserirNoInicio(&listaRegistro, 1123);
	InserirNoInicio(&listaRegistro, 1);

	// Imprimindo os elementos da lista
	printf("Elementos da lista:\n[ ");

	Registro *p = listaRegistro;
	
	while(p != NULL){
		printf(" %d ", p->value);
		p = p->next;
	}
	printf(" ]\n");

	DesalocarLista(&listaRegistro);

	return 0;
}

void InserirNoInicio(Registro **inicioDaLista, int value){

	Registro *novoTopo = (Registro*) malloc(sizeof(Registro));

	novoTopo->next = *inicioDaLista;
	novoTopo->value = value;
	*inicioDaLista = novoTopo;
	
}

void DesalocarLista(Registro **lista){

	Registro *noAtual = *lista;
	Registro *proximoNo;

	while(noAtual != NULL){
		proximoNo = noAtual->next;
		free(noAtual);
		noAtual = proximoNo;
	}
	
}
