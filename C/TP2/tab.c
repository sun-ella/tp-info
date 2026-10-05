#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tv( int a ){
    int n=0;
    long u = a;
    while (u!=1){
        if (u%2==0){
            u=u/2;
        } else {
            u= 3*u +1;
        }
        n+=1;
    }
    return n;
}

int facto(int n) {
    int res;
    if (n<=0){
        res=1;
        } else {
        int x = n - 1;
        res = (facto(x)) * n; 
    }
    return res;
}

void swap(int a[], int i, int j){
    int temp= a[i];
    a[i]= a[j];
    a[j]= temp;
    // printf("l'elem %d est %d et l'elem %d est  %d\n",i, a[i],j, a[j]);
}

void knuth_shuffle(int a[], int n){
    for (int i=0;i<n;i++){
        int temp= rand() % (i+1);
        swap(a,i,temp);
    }
    printf("[");
    for(int j=0;j<n;j++){
        printf(" %d  ",a[j]);
    }
    printf("]\n");
}


int pascal (int i , int j){
    if (j<0 || j>i){return 0;}
    else {int res = (facto(i))/ (facto(i-j)*(facto(j)));
    return res;}
}

void t_pascal(int lignes, int colonnes, int mat[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++)
        for (int j = 0; j < colonnes; j++)
            mat[i][j] = 0;

    for (int i = 0; i < lignes; i++) {
        mat[i][0] = 1;
        for (int j = 1; j <= i && j < colonnes; j++)
            mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
    }
}

void afficher_matrice(int lignes, int colonnes, int mat[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
}



int main(void){
    srand(time(NULL));

    // Triangle de Pascal
    int mat[10][10];
    t_pascal(10, 10, mat);
    afficher_matrice(10, 10, mat);

    // Exercice 2
    int a[4] = {0, 1, 2, 3};
    for (int k = 0; k < 5; k++)
        knuth_shuffle(a, 4);

    // Question 1
    int max = 0, argmax = 0;
    for (int n = 1; n <= 10000; n++) {
        int temp = tv(n);
        if (temp > max) {
            max = temp;
            argmax = n;
        }
    }
    printf("max tv = %d pour a = %d\n", max, argmax);

    // Question 2
    int compteur = 0;
    for (int i = 1; i <= 100000; i++) {
        if (tv(i) > 20)
            compteur++;
    }
    printf("nombre de a avec tv(a) > 20 : %d\n", compteur);
}