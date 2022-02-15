#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elemento.h"

int main()
{
   printf("------ESTUDIANTE: Martinez Santiago-----DNI: 44395983-----\n");

   Elemento e1=CrearElemento(25,"Mn","Magnaneso","Transicion",30);
   Elemento e2=CrearElemento(36,"Kp","Kripton","Gas Noble",50);
   Elemento e3=CrearElemento(11,"Na","Sodio","Metal Alcalino",12);

   Elemento e[3]={e1,e2,e3};
   MostrarElementos(e,3);
   printf("\n------ORDENADOS------\n");
   OrdenarElementos(e,3);
   MostrarElementos(e,3);

SetNumeroAtomico(e1,GetNumeroAtomico(e1)*2);
printf("\n NUmero Atomico: %d",GetNumeroAtomico(e1));

    return 0;
}
