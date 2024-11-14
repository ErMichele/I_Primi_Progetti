#include <stdio.h>
#include <string.h>
int main(void) {
    char sì[]="Sì";
    char verifica[1];
    double capitale, tasso, interesse, coso;
    int giorni;
    printf ("|Calcolatore di interessi|\n");
    printf ("Inserisci il capitale base:\n");
    scanf ("%lf", &capitale);
    printf ("Invece ora inserisci il tasso in precentuale:\n");
    scanf ("%lf", &tasso);
    printf ("Infine poni i giorni passati:\n");
    scanf ("%d", &giorni);
    interesse=capitale*(tasso/100)*(giorni/365);
    printf ("Desiderà l'interesse sommato al capitale o no? \n");
    scanf ("%s", &verifica);
    if (strcmp(sì, verifica)== 0) {
        coso=capitale+interesse;
        printf ("%lf", coso);
    }
    else {
        printf ("%lf", interesse);
         }
    return 0;
    }
