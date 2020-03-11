#include"stdlib.h"
#include"vetorDinamico.h"
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
TVDina* criarVd(){
   TVDina *vd = malloc(sizeof(TVDina));

  vd->tam=1;
  vd->ocupacao=0;
  vd->vetor=malloc(sizeof(void*)*vd->tam);
  return vd;
};



void inserir(TVDina *vd, void *dado,int pos){
  vd->ocupacao++;
   if(pos > vd->tam){
     realloc (vd->vetor, sizeof(void*)*(pos+1))
   }
  vd->vetor[pos-1]=dado;
};

void remover();
void ordenar();
