#include <stdio.h>

void prenom(void){
    char nom[20];
    printf("What's your name? : ");
    scanf("%s", nom);
    printf("Hi %s ! ;D \n", nom);
}

int add (int n1, int n2){
    int res= n1 + n2;
    printf("%d + %d = %d \n", n1, n2, res);
    return res;
}


int main(void){
    int n1,n2;
    prenom();
    printf("Choisissez vos nombres : \n1) ");
    scanf("%d",&n1);
    printf("2) ");
    scanf("%d",&n2);
    add(n1,n2);
    return 0;
} 