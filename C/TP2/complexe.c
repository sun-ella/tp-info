#include <stdio.h>
#include <stdlib.h>
#include "complexe.h"


void afficher(complexe z) {
    if (z.y >= 0)
        printf("%.2f + %.2fi\n", z.x, z.y);
    else
        printf("%.2f - %.2fi\n", z.x, -z.y);
}



complexe addition(complexe a, complexe b) {
    complexe r = { .x = a.x + b.x, .y = a.y + b.y };
    return r;
}








// double mon_sqrt(double x) {
//     if (x < 0)  return -1;
//     if (x == 0) return 0;
//     double r = x;
//     for (int i = 0; i < 50; i++)
//         r = 0.5 * (r + x / r);
//     return r;
// }

// #define PI 3.14159265358979323846

// static double mon_atan_serie(double x) {
//     double somme = 0.0;
//     double terme = x;
//     for (int n = 1; n < 2000; n++) {
//         somme += terme / (2 * n - 1);
//         terme *= -x * x;
//     }
//     return somme;
// }

// double mon_atan(double x) {
//     if (x >  1.0) return  PI / 2 - mon_atan_serie( 1.0 / x);
//     if (x < -1.0) return -PI / 2 - mon_atan_serie( 1.0 / x);
//     return mon_atan_serie(x);
// }

// double mon_atan2(double y, double x) {
//     if (x > 0)            return mon_atan(y / x);
//     if (x < 0 && y >= 0)  return mon_atan(y / x) + PI;
//     if (x < 0 && y < 0)   return mon_atan(y / x) - PI;
//     if (x == 0 && y > 0)  return  PI / 2;
//     if (x == 0 && y < 0)  return -PI / 2;
//     return 0; // (0,0) : indéfini
// }

// void afficher_expo(complexe z) {
//     double r     = mon_sqrt(z.x * z.x + z.y * z.y);
//     double theta = mon_atan2(z.y, z.x);
//     printf("%.2f * e^(%.2fi)\n", r, theta);
// }

// complexe conjugue(complexe z) {
//     complexe c = { .x = z.x, .y = -z.y };
//     return c;
// }

// complexe soustraction(complexe a, complexe b) {
//     complexe r = { .x = a.x - b.x, .y = a.y - b.y };
//     return r;
// }

// complexe multiplication(complexe a, complexe b) {
//     complexe r = {
//         .x = a.x * b.x - a.y * b.y,
//         .y = a.x * b.y + a.y * b.x
//     };
//     return r;
// }

// complexe division(complexe a, complexe b) {
//     double d = b.x * b.x + b.y * b.y;
//     complexe r = {
//         .x = (a.x * b.x + a.y * b.y) / d,
//         .y = (a.y * b.x - a.x * b.y) / d
//     };
//     return r;
// }

