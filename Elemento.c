#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elemento.h"
struct ElementoStruct{
int numeroAtomico;
char simbolo[5];
char nombre[15];
char tipo[15];
int neutrones;
int numeroMasico;
int electrones;
};

Elemento CrearElemento(int nAtomico,char simb[5],char nom[15],char tip[15],int cantNeutrones){
Elemento e=malloc(sizeof(struct ElementoStruct));
e->numeroAtomico=nAtomico;
strcpy(e->simbolo,simb);
strcpy(e->nombre,nom);
strcpy(e->tipo,tip);
e->neutrones=cantNeutrones;
e->numeroMasico=nAtomico+cantNeutrones;
e->numeroAtomico/=2;
e->electrones=nAtomico;
return e;


}

void MostrarElemento(Elemento e){
printf("\n------ELEMENTO-----\n");
printf("Numero Atomico: %d\n",e->numeroAtomico);
printf("Simbolo: %s\n",e->simbolo);
printf("Nombre: %s\n",e->nombre);
printf("Tipo: %s\n",e->tipo);
printf("Cantidad de neutrones: %d\n",e->neutrones);
printf("Numero Masico: %d\n",e->numeroMasico);
printf("Cantidad de electrones: %d\n",e->electrones);
}


void MostrarElementos(Elemento e[],int tam){
for(int i=0;i<tam;i++){

    MostrarElemento(e[i]);
}
}

void OrdenarElementos(Elemento e[],int tam){Elemento aux;
for(int i=0;i<tam;i++){
    for(int j=0;j<tam-1;j++){
        if(e[j]->numeroMasico>=e[j+1]->numeroMasico){
             aux=e[j+1];
        e[j+1]=e[j];
        e[j]=aux;

        }

    }

}


}
void Destructor(Elemento e){
free(e);
}

char *GetSimbolo(Elemento e){
return e->simbolo;
}
char *GetNombre(Elemento e){
return e->nombre;
}
char *GetTipo(Elemento e){
return e->tipo;
}
int GetNeutrones(Elemento e){
return e->neutrones;
}
int GetNumeroAtomico(Elemento e){
return e->numeroAtomico;
}
int GetNumeroMasico(Elemento e){
return e->numeroMasico;
}
int GetElectrones(Elemento e){
return e->electrones;}



void SetSimbolo(Elemento e,char simb[5]){
strcpy(e->simbolo,simb);
}
void SetNombre(Elemento e,char nom[15]){
strcpy(e->nombre,nom);
}
void SetTipo(Elemento e,char tip[15]){
strcpy(e->tipo,tip);
}
void SetNeutrones(Elemento e,int neut){
e->neutrones=neut;
SetNumeroMasico(e);
}
void SetNumeroAtomico(Elemento e,int nAtomico){
e->numeroAtomico=nAtomico;
SetElectrones(e);
SetNumeroMasico(e);
}
void SetNumeroMasico(Elemento e){
e->numeroMasico=e->electrones+e->neutrones;
}
void SetElectrones(Elemento e){
e->electrones=e->numeroAtomico;
}



