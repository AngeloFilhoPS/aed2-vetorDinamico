#include "stdio.h"
#include "vetorDinamico.h"

typedef struct VDinamico{
  int tam;
  int ocupacao;
  void* *vetor;
}TVDina;


int main(int argc, char const *argv[]) {
  TVDina *meuVD= criarVd();
  return 0;
}
