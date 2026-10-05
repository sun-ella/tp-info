#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#include "tableaux.h"
#include <time.h>

void test_cree(){
  tableau* t = cree();
  assert (t->nb_elem == 0);
  free(t->tab);
  free(t);
}


void test_ajout(int n, int m){
  // Creation d'un tableau de n entiers majoré par m.
  // Verification que tous les termes sont dans le tableau
  int* tab_test = (int*)malloc(n * sizeof(int));
  if (tab_test == NULL){
    fprintf(stderr, "Erreur allocation");
    exit(1);
  }
  tableau* t = cree();
  for (int i = 0; i < n; i ++){
      tab_test[i] = rand() % m;
      append(t, tab_test[i]);
  }
  assert(t->nb_elem == n);
  for (int i = 0; i < n; i ++) assert(t->tab[i] == tab_test[i]);
  free(tab_test);
  free(t->tab);
  free(t);
}

void test_tout(){
  srand(time(NULL));
  test_cree();
  test_ajout(8000, 3000);
}