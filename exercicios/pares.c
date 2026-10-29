
#include <stdio.h>

void main()
{
    int soma = 0;
    
    printf("PARES ENTRE 0 E 10: ");
    
	for(int i = 2; i < 11; i+=2) {
		printf("%d ", i);
		soma += 1;
	}
	
	printf("\nQUANTIA TOTAL DE PARES: %d", soma);

}
