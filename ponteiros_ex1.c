#include <stdio.h>

int main(){
	
	int var1 = 3;
	float var2 = 1.2;
	char var3 = 'y';
	
	printf("\nTipo inteiro antes: %d\n", var1);
	printf("\nTipo float antes: %f\n", var2);
	printf("\nTipo char antes: %c\n", var3);
	
	int *ptrvar1 = &var1;
	float *ptrvar2 = &var2;
	char *ptrvar3 = &var3;
	
	*ptrvar1 = 6;
	*ptrvar2 = 2.4;
	*ptrvar3 = 'z';
	
	printf("\nTipo inteiro depois: %d\n", *ptrvar1);
	printf("\nTipo float depois: %f\n", *ptrvar2);
	printf("\nTipo char depois: %c\n", *ptrvar3);
	
	return 0;
}
	
	
	
