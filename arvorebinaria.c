
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
 

Arv* a1 = arv_cria('A', arv_criavazia(), arv_criavazia());


Arv* a2= arv_cria('E',arv_criavazia(),a1);
Arv* a3 = arv_cria('C', arv_criavazia(), arv_criavazia());


Arv* a4 = arv_cria('F', arv_criavazia(), arv_criavazia());
Arv* a5 = arv_cria('K', arv_criavazia(), arv_criavazia());
Arv* a6 = arv_cria('L', arv_criavazia(), arv_criavazia());

Arv* a7 = arv_cria('G', arv_criavazia(), arv_criavazia());
Arv* a8 = arv_cria('D', arv_criavazia(), arv_criavazia());

Arv* a9 = arv_cria('M', arv_criavazia(), arv_criavazia());

Arv* a10 = arv_cria('I', arv_criavazia(), arv_criavazia());


Arv* a12 = arv_cria('J', arv_criavazia(), arv_criavazia());

Arv* a18 = arv_cria('*', arv_criavazia(), arv_criavazia());

//sub arvore B
Arv* a13 = arv_cria('B', a2,a3);

//sub arvore E
Arv* a14 = arv_cria('E', a4,a5);

//sub arvore C
Arv* a15 = arv_cria('C', a7,a8);


//sub arvore H
Arv* a16 = arv_cria('H', a9,a10);


//arvore A
Arv* a=arv_cria('A',a13,a18 );


  pre_ordem(a);
  printf("\n");

  em_ordem(a);
  printf("\n");

  pos_ordem(a);
  printf("\n");

  return 0;

}
