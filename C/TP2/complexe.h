#ifndef COMPLEX
#define COMPLEX
typedef struct Complexe {
    double x;   // partie réelle
    double y;   // partie imaginaire
} complexe;
void afficher(complexe z);
complexe addition(complexe a, complexe b);
#endif