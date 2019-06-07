#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
        int Numero;
        struct Nodo *siguiente;
        struct Nodo *anterior;
} Elemento;

int main(){
    Elemento *Nuevo = NULL;
    Elemento *Inicio = NULL;
    Elemento *Final = NULL;
    Elemento *Recorrer = NULL;
    Elemento *RecorreIzquierda = NULL;
    Elemento *RecorrerDerecha = NULL;
    int Checkear = 0;
    long int NumeroSolicitar=0;
    int digito = 0;
    printf("\nDigite un numero: ");
    scanf(" %ld",&NumeroSolicitar);
    while(NumeroSolicitar>9) {
      digito = NumeroSolicitar % 10;
      Nuevo = (Elemento *)malloc(sizeof(Elemento));
      Nuevo->siguiente = NULL;
      Nuevo->anterior = NULL;
      Nuevo->Numero = digito;
         if( Inicio == NULL ) {
             Inicio = Nuevo;
         }
          else {
           Nuevo->anterior = Final;
           Nuevo->anterior->siguiente = Nuevo;
         }
         Final = Nuevo;
         NumeroSolicitar=NumeroSolicitar/10;
    }
    Nuevo = (Elemento *)malloc(sizeof(Elemento));
    Nuevo->siguiente = NULL;
    Nuevo->anterior = NULL;
    Nuevo->Numero = NumeroSolicitar;
    if( Inicio == NULL ) {
        Inicio = Nuevo;
    }
    else {
       Nuevo->anterior = Final;
       Nuevo->anterior->siguiente = Nuevo;
    }
    Final = Nuevo;
    Recorrer = Inicio;
    while(Recorrer!=NULL) {
       printf("\n%ld",Recorrer->Numero);
       Recorrer = Recorrer->siguiente;
    }
    RecorreIzquierda = Inicio;
    RecorrerDerecha = Final;
    Checkear = 0;
    while(RecorreIzquierda!=RecorrerDerecha && Checkear==0) {
     if(RecorreIzquierda->Numero!=RecorrerDerecha->Numero) {
       Checkear = 1;
     }
     RecorreIzquierda=RecorreIzquierda->siguiente;
     RecorrerDerecha=RecorrerDerecha->anterior;
    }
    if(Checkear==0) {
      printf("\nEl numero si es capicua\n");
    } else {
      printf("\nEl numero no es capicua\n");
    }
  system("PAUSE>NULL");
  return 0;
}
