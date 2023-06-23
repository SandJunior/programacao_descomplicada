#include <stdio.h>

int main(){
	int var1, var2;
	
	if (&var1 > &var2)
	{
		printf("Endereço da primeira variavel: %p\n", &var1);
	}
	
	else if (&var1 < &var2)
	{
	    printf("Endereço da segunda variavel: %p\n", &var2);
	}
	
    return 0;
}	
	
