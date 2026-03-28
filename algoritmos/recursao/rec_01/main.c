#include <stdio.h>


int X(int n) {

	if(n == 1 || n == 2) { return n; }
	else{ return X(n - 1) + n * X(n -2); }
}


int main(int argc, char *argv[]){

	int n = 5;
	int result = X(n);
	
	printf("Resultado X(%d): %d\n", n, result);



	return 0;
}
