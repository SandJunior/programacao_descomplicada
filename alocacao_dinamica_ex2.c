#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, n;
	int *p;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &n);
	
	p = (int*)malloc(n* sizeof(int));
	
	for(i=0; i<n; i++){
	printf("Insira inteiro a ser colocado no vetor: ");
	scanf("%d", &p[i]);
   }
	
	for(i=0; i<n; i++){
	printf("%d, ", p[i]);
   }
   
	free(p);
	return 0;
}
