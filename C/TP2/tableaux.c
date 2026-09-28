#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double tv( int a ){
    int n=0;
    int u = a;
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
        int temp= rand() % n;
        swap(a,i,temp);
    }
    printf("[");
    for(int j=0;j<n;j++){
        printf(" %d  ",a[j]);
    }
    printf("]\n");
}


int pascal (int i , int j){
    int res = (facto(i))/ (facto(i-j)*(facto(j)));
    return res;
}
int a;
int b;
int t_pascal(int mat[a][b]){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            mat[i][j]=pascal(i,j);
        }
    }
    
}

int main(void){
    srand(time(NULL));
    // int a[4]={0,1,2,3};
    int mat[10][10];
    mat[10][10]=t_pascal(mat[10][10]);
    printf("%d", mat[10]);

    //exo 2
    // swap(a,2,3);

    // knuth_shuffle(a,4);

    //q1
    // int max=tv(1);
    // int n=1;
    // while (n<10000){
    //     int temp =tv(n);
    //     if (temp >max){
    //         max= temp;
    //     }
    //     n+=1;
    // }
    // printf("%d\n",max);

    // q2
    // int n=0;
    // for(int i=1;i<(10**5);i++){
    //     int temp= tv(i);
    //     if (temp>20){
    //         n+=1;
    //     }
    // }
    // return 0;
}