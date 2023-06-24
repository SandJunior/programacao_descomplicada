#include <stdio.h>

int main(){
	
	int var1, var2;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &var1);
	
	printf("Insira um segundo numero inteiro: ");
	scanf("%d", &var2);
	
	if (&var1 > &var2)
	{
		printf("Conteudo do primeiro inteiro: %d", var1);
	}
	
	else if (&var1 < &var2)
	{
		printf("Conteudo do segundo inteiro: %d", var2);
	}
	
	return 0;
}
