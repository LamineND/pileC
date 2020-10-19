#include "../myLibrary/pile.h"
int main()
{
 Rationnel* p_int;
 Pile _pile = generer();

 printf("Ci-dessous les entiers fournis dans l'ordre inverse de leur saisie : \n");

 while (_pile.counter != 0)
 {
 p_int = lireTete(_pile);
 printf("%d\t", *p_int);

 _pile = depiler(_pile);
 }
 printf("\n\n-- FIN du traitement --\n");
 system("pause");

 return 0;
}

