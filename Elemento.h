#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED
struct ElementoStruct;
typedef struct ElementoStruct *Elemento;

void MostrarElemento(Elemento e);
void MostrarElementos(Elemento e[],int tam);
Elemento CrearElemento(int nAtomico,char simb[5],char nom[15],char tip[15],int neutrones);
void OrdenarElementos(Elemento e[],int tam);


///DESTRUCTOR
void Destructor(Elemento e);




///GETS
char *GetSimbolo(Elemento e);
char *GetNombre(Elemento e);
char *GetTipo(Elemento e);
int GetNeutrones(Elemento e);
int GetNumeroAtomico(Elemento e);
int GetNumeroMasico(Elemento e);
int GetElectrones(Elemento e);
///SETS
void SetSimbolo(Elemento e,char simb[5]);
void SetNombre(Elemento e,char nom[15]);
void SetTipo(Elemento e,char tip[15]);
void SetNeutrones(Elemento e,int neut);
void SetNumeroAtomico(Elemento e,int nAtomico);
void SetNumeroMasico(Elemento e);
void SetElectrones(Elemento e);

#endif // ELEMENTO_H_INCLUDED
