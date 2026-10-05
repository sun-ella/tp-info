#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "complexe.h"


int main(void) {
    complexe z1 = { .x = 3.0, .y =  2.0 };
    complexe z2 = { .x = 1.0, .y = -4.0 };

    printf("z1 = ");        afficher(z1);
    printf("z2 = ");        afficher(z2);
    printf("z1 + z2 = ");   afficher(addition(z1, z2));
    // printf("z1 - z2 = ");   afficher(soustraction(z1, z2));
    // printf("z1 * z2 = ");   afficher(multiplication(z1, z2));
    // printf("z1 / z2 = ");   afficher(division(z1, z2));
    // printf("conj(z1) = ");  afficher(conjugue(z1));
    // printf("z1 en expo = ");afficher_expo(z1);

    return 0;
}