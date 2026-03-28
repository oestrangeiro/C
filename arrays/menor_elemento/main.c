/*
	Encontre o menor elemento de um array de inteiros
*/

#include <stdio.h>
#include <stdlib.h>


int findMinElement(int v[], int n);


int main(void){

	int array[] = {0, 2, 23, 4, 11, -1, 5, 88};
	int size = sizeof(array) / sizeof(array[0]);
	
	int min = findMinElement(array, size);

	printf("Menor elemento do array: %d\n", min);



	return 0;
}

int findMinElement(int v[], int n){

	int min = v[0];

	for(int e = 0; e < n; e++){
		if(min > v[e]) { min = v[e]; }
	}

	return min;
	
}
