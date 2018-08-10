#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void armazena_vetor(char* caminho, int n, int V[n])
{
	int i;
	FILE *f = fopen(caminho, "w");
	
	if (f == NULL)
	{
    	printf("Error opening file!\n");
    	exit(1);
	}
		
	for (i = 0; i < n; i++)
	{
		fprintf(f, "%d\t", V[i]);
	}
		
	
	fclose(f);
	
}

void imprime_vetor(int n, int V[n])
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", V[i]);
	}
	
}

int convert_int(char* s)
{
	int resultado = 0;
	int i, len;
	len = strlen(s);

	for(i=0; i < len; i++)
	{
		resultado = resultado * 10 + ( s[i] - '0' );
	}
	
	return resultado;

}

int main( int argc, char *argv[ ] )
{
	int i, sorteio;
	// quantidade de vértices
	int n = convert_int(argv[1]);
	char* caminho = argv[2];
	
	int V[n];
	
	srand(time(0));
	
	for (i = 0; i < n; i++)
	{
		// sorteia numero entre -1000 e 1000
		sorteio = rand() % 2000 - 1000;
		V[i] = sorteio;
	}
	
	imprime_vetor(n, V);
	armazena_vetor(caminho, n, V);
	
	return 0;
}
