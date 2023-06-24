#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *arq = fopen("arquivo.txt", "w");
	int carac, qntdVogais = 0;
	
	if(arq == NULL)
	{
		printf("Nao deu pra abrir o arquivo.");
		return 1;
	}
	
	while (feof(arq) == 0)
	{
		carac = getc(arq);
		
	if (carac=='a'||carac=='A'||carac=='e'||carac=='E'||carac=='i'||carac=='I'||carac=='o'||carac=='O'||carac=='u'||carac=='U')
	{
		qntdVogais++;
	}
}
	printf("Quantidade de vogais: %d\n", qntdVogais);
	
	fclose(arq);
	return 0;
}

