#include"stdlib.h"
// Implementação do conceito de vetor dinamico

//atributo vetor
typedef struct VDinamico{
  int tam;
  int ocupacao;
  void* *vetor;
}TVDina;

//void *vetor armazena um endereço do tipo inteiro
//malloc(sizeof(void*)*tam); setamos o espaço de armazenamento do vetor
// um vetor pode aponta para qualquer coisa
TVDina* criarVd();
void inserir();
void remover();
void ordenar();
