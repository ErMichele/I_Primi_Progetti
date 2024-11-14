#include <stdio.h>

int main() {
    printf ("|Calcolatore di medie|   Inserisci il numero dei valori che vuoi calcolare, e poi i vari valori per fare la media tra questi:");
    int numeri;
    float input;
    float media=0;
    scanf("%d", &numeri);
    int Lista_numeri[numeri];
    
    // Presa in input dei valori
    for (int i=0;i<numeri;i++) {
        scanf ("%f", &input);
        Lista_numeri[i]=input;
    }
    // Calcolo della somma
    for (int i=0;i<numeri;i++) {
        media += Lista_numeri[i];
    }
    media=media/numeri;
    printf("La media tra tutti i numeri è: \n %f", media);
    return 0;
}