#ifndef TAB_H
#define TAB_H

#include <stdlib.h>

typedef struct Tab{
int nb_elem;
int* tab;
}tableau;

tableau* cree();
void append(tableau* t, int a);
int pop(tableau* t);

#endif