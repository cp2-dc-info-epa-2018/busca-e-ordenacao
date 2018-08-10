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

void vetor_de_arquivo(int n, int V[n], char* caminho)
{
  int i;
  
  FILE *f;
  f = fopen(caminho, "r");
  
  for (i = 0; i < n; ++i)
  {
    if (!fscanf(f, "%d", &V[i])) 
		break;
     
  }

  fclose(f);

}

int busca_linear(int n, int V[n], int chave)
{
	return -1;
}

int busca_binaria(int n, int V[n], int chave)
{
	return -1;
}

void bubble_sort(int n, int V[n])
{
	
}

int main()
{
	int n = 10;
	int V[n];
	
	vetor_de_arquivo(n, V, "i10.txt");
	imprime_vetor(V, n);
	bubble_sort(n, V);
	imprime_vetor(V, n);
	
	return 0;
}
