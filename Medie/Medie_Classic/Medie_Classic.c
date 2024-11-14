#include <stdio.h>

int main() {
    int numeri;
    float somma;
    float media = 0;
    
    printf ("|Calcolatore di medie|\n");
    
    printf("Inserisci il numero dei valori che vuoi calcolare: ");
    scanf("%d", &numeri);
    for (int i = 0; i < numeri; i++) {
        printf("Inserire valore %d/%d: ", i + 1, numeri);
        scanf ("%f", &somma);
        media+=somma;
    }
    media = media / numeri;
    printf("La media tra tutti i numeri è: %f", media);
    return 0;
}