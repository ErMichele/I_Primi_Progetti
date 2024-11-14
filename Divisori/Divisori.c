
#include <stdio.h>

int main()
{
	printf ("|VERIFICATORE DI DIVISORI|");
	printf ("       Scrivi due numeri per verificare che il secondo è divisore del primo:      ");
	int x;
	scanf ("%d", &x);
	int y;
	scanf ("%d", &y);
	if (x%y == 0) {
		printf ("Sì,");
		printf (" %d", x);
		printf (" è divisibile per");
		printf (" %d", y);
	} else {
		printf ("No,");
		printf (" %d", x);
		printf (" non è divisibile per");
		printf (" %d", y);
	}
	return 0;
}