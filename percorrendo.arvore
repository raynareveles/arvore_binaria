#include <stdio.h>
#include <stdlib.h>

struct arv {
char info;
struct arv* esq;
struct arv* dir;
};
typedef struct arv Arv;

Arv* arv_criavazia (void)
{
return NULL;
}

Arv* arv_cria (char c, Arv* sae, Arv* sad)
{
Arv* p=(Arv*)malloc(sizeof(Arv));
p->info = c;
p->esq = sae;
p->dir = sad;
return p;
}


void arv_imprime (Arv* h)
{
if (h != NULL){
printf("%c ", h->info);
arv_imprime(h->esq);
arv_imprime(h->dir);
}
}

// Percorre pre ordem Raiz, Esq, Dir
void pre_ordem (Arv* h){
  if(h == NULL) return;
  printf("%c ", h->info);
  pre_ordem(h->esq);
  pre_ordem(h->dir);
}

// Percorre em ordem Esq, Raiz, Dir
void em_ordem (Arv* h){
  if(h == NULL) return;
  em_ordem(h->esq);
  printf("%c ", h->info);
  em_ordem(h->dir);
}

// Percorre pos ordem Esq, Dir, Raiz
void pos_ordem(Arv* h){
  if(h == NULL) return;
  pos_ordem(h->esq);
  pos_ordem(h->dir);
  printf("%c ", h->info);
}

int main(){
	
  
  Arv* a5 = arv_cria('F', NULL,NULL);
  Arv* a6 = arv_cria('G', NULL,NULL);
  Arv* a9 = arv_cria('J', NULL,NULL);
  Arv* a11 = arv_cria('L', NULL,NULL);
  Arv* a12 = arv_cria('M', NULL,NULL);


  Arv* a10 = arv_cria('K', NULL,a11);
  Arv* a4 = arv_cria('E', a10,a5);
  Arv* a8 = arv_cria('I', NULL,a9);
  Arv* a7 = arv_cria('H', a12,a8);
  Arv* a3 = arv_cria('D', a7,NULL);
 
  Arv* a2 = arv_cria('C', a6,a3);
  Arv* a1 = arv_cria('B', a4,a2);
  
  //raiz A
  Arv* a=arv_cria('A',a1, NULL);

  pre_ordem(a);
  printf("\n");

  em_ordem(a);
  printf("\n");

  pos_ordem(a);
  printf("\n");

  return 0;
  }
