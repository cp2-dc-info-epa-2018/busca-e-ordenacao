#include <stdio.h>

void imprime_vetor(int V[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", V[i]);
	}
	printf("\n");
}

int busca_linear(int V[], int chave)
{
	return -1;
}

int busca_binaria(int V[], int chave)
{
	return -1;
}

int main()
{
	int V[11];
	V[0] = 1;
	V[1] = 3;
	V[2] = 4;
	V[3] = 6;
	V[4] = 7;
	V[5] = 8;
	V[6] = 9;
	V[7] = 15;
       	V[8] = 19;
	V[9] = 22;
	V[10] = 29;

	imprime_vetor(V, 11);
	return 0;
}
