# Busca e ordenação
## Equipe de Preparação em Algoritmos

O objetivo desta tarefa é a pratica de algoritmo em C. Para isso deverão ser implementadas as seguintes tarefas de busca:

- [x] Busca Linear
- [x] Busca Binária


Posteriormente implementaremos os seguintes algoritmos de ordenação:

- [ ] Bubble Sort
- [ ] Quick Sort
- [ ] Merge Sort

Para as tarefas de ordenação utilize o gerador fornecido. Primeiro abra o arquivo `gerador.c` no DevC e compile (náo use o botão Compile & Run, apenas Compile). Abra o `git bash` e navegue até a pasta do seu repositório. O comando `cd <nome-da-pasta>` entra em uma pasta e o comando `ls` mostra o conteúdo da pasta atual. Você pode utilizar a tecla `<TAB>` enquanto digita o nome da pasta para completar automaticamente. Estando na pasta, execute o comando

```
./gerador.exe 10 i10.txt
```

para criar um vetor de tamanho 10 e salvar no arquivo chamado `i10.txt`. Faça o mesmo para 100, 1000, 10000 e 100000:

```
./gerador.exe 100 i100.txt
./gerador.exe 1000 i1000.txt
./gerador.exe 10000 i10000.txt
./gerador.exe 100000 i100000.txt
```

Ao rodar o `main.c` defina o valor da variável `n` e preencha o nome do arquivo de acordo com o vetor que deseja ler. Utilize a função de impressão implementada para conferir os resultados.

O método de ordenação da bolha (ou Bubble Sort) funciona pegando elemento a elemento e comparando cada um deles com todos os demais. Você deverá realizar trocas a cada comparação, fazendo com que os menores elementos fiquem no inicio e os maiores no final.

Para atualizar a barra de progresso de seu repositório insira um `x` dentro dos colchetes dos itens e comite.
