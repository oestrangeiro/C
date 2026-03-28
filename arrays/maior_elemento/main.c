// Exercício: Encontre o maior elemento em um array

#include <stdio.h>
#include <stdlib.h>

int findMaxElement(int array[], int sizeArray);

int main(void){

	int arr[] = {0, -1, -2, 3, 41, 9, 2};
	
	int sizeArr = sizeof(arr) / sizeof(arr[0]);

	int k = findMaxElement(arr, sizeArr);

	printf("Maior elemento: %d\n", k);


	return 0;
}

int findMaxElement(int array[], int sizeArray){

	if(sizeArray == 1) {return array[0];}

	int k = array[0];
	
	for(int i = 0; i < sizeArray; i++){
		
		if(k < array[i]) { k = array[i];}
		
	}
	
	return k;
	
}
