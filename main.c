#include <stdio.h>

int main(void) {
    int lato1, lato2, lato3;
    printf("inserisci il valore di lato1: ");
    scanf("%d", &lato1);
    printf("inserisci il valore di lato2: ");
    scanf("%d", &lato2);
    printf("inserisci il valore di lato3: ");
    scanf("%d", &lato3);
    if (lato1 == lato2 && lato2==lato3) {
        printf("e' un triangolo equilatero (ha tutti e tre i lati uguali)");
    }
    else if (lato1 == lato2 || lato3 == lato1 || lato3 == lato2) {
        printf("e' un triangolo isoscele (ha 2 lati uguali)");
    }
    else {
        printf("e' un triangolo scaleno (ha i 3 lati tutti diversi)");
    }
}