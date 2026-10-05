#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "test.h"
#include "tableaux.h"

int main() {
    srand(time(NULL));  
    test_tout();
    printf("Tous les tests sont ok \n");
    return 0;
}