#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tableaux.h"

const int CAPACITE = 10000;



tableau* cree() {
    tableau* t = malloc(sizeof(tableau));
    if (t == NULL) {
        fprintf(stderr, "Problème de malloc\n");
        exit(1);
    }
    t->tab = malloc(CAPACITE * sizeof(int));
    if (t->tab == NULL) {
        free(t);
        fprintf(stderr, "Erreur de malloc\n");
        exit(1);
    }
    t->nb_elem = 0;
    return t;
}

void append(tableau* t, int a ){
    if (t->nb_elem >= CAPACITE){
        fprintf(stderr,"Problème de malloc");
        exit(1);
    }
    t->tab[t->nb_elem]=a;
    (*t).nb_elem +=1;
}


int pop(tableau* t){
    if (t->nb_elem ==0){
        fprintf(stderr,"Liste vide");
        exit(1);
    }
    t->nb_elem-=1;
    return t->tab[t->nb_elem];
}