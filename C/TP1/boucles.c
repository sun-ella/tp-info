#include <stdio.h>
#include <stdbool.h>
int somme (int n) {
    int res=0;
    for (int i=1;i<=n;i++){
        res+=i;
    }
    return res;
}

void decollage (int n) {
    for (int i=0; i<n; i++){
        int x = n-i;
        printf("%d..\n",x);
    }
    printf("Décollage!!\n");
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

bool premier(int n){
    bool res;
    if (n<2) {
        res= false;
    } else {
        for (int i=2; i<n; i++){
            if ((n%i) == 0){
                res= false;
            } 
        res= true;
        }
    }
    return res;
}


int main(void){
    int nombre;
    printf("Choisissez votre nombre : ");
    scanf("%d",&nombre);
    // printf("La somme de 0 à %d est égale à %d\n", nombre, somme(nombre));
    // decollage(nombre);
    // printf("%d\n",facto(nombre));
    printf("%d est %s\n",nombre, premier(nombre)? "premier":"n'est pas premier");
    return 0;
}

