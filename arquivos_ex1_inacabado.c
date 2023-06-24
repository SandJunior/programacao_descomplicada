//INACABADO (por enquanto)
#include <stdio.h>

int main(){
	
	FILE *arq;
	arq = fopen("arq.txt", "w");
	
	if(arq == NULL)
	{
		printf("Nao deu pra abrir o arquivo.");
		return 1;
	}
	
	char carac;
	while (carac != '0')
	{
		scanf("%c", &carac);
	}	
	
	arq = fopen("arq.txt", "r");
	printf("%c ", carac);
	
	fclose(arq);
	return 0;
}
