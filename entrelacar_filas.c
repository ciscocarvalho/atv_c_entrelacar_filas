#include "fila.c"
#include <stdio.h>
#include <stdlib.h>

Fila *intercala_fila(Fila *f1, Fila *f2) {
  Fila *inter = cria();                // cria fila inter
  int tamanho = (f1->fim) + (f2->fim); // soma o tamanho das filas f1 e f2 a partir do valor de seu fim
  int i;
  for (i = 0; i <= tamanho; i++) { // for que roda até o tamanho da soma de f1 e f2
    enqueue(inter, f1->vet[i]);    // insere valores de f1 e f2 intercaladamente
    enqueue(inter, f2->vet[i]);
  }
  inter->fim = i - 1; // determina que o fim da fila inter é igual ao valor final do contador
                      // para que assim não sejam impressos lixos de memória presentes na  fila inter
  return inter;       // retorna fila inter
}

int main() { return 0; }
