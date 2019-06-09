#include <stdio.h>
#include <stdlib.h>

struct nodo {
	int dato;
	struct nodo *izq, *dcho;
};

typedef struct nodo Nodo;

Nodo* crearNodo(int dato){
	Nodo* c;
	c = (Nodo*)malloc(sizeof(Nodo));
	c->dato = dato;
	c->izq= NULL;
	c->dcho = NULL;
	return c;
}

void eliminar(Nodo** raiz, int dato){
   if(!(*raiz)){
     printf("El nodo no se encuentra");
   }
   else if(dato < (*raiz)->dato){
     eliminar(&(*raiz)->izq,dato);
   }
   else if(dato > (*raiz)->dato){
       eliminar(&(*raiz)->dcho,dato);
     }
     else{
	Nodo* c;
	c=(*raiz);
	if(c->izq == NULL){
	  (*raiz) = c->dcho;
	}
	else if(c->dcho == NULL){
	    (*raiz) = c->dcho;
	  }
	else{
	  reemplazar(&c);
	}
	free(c);
	}
}

void reemplazar(Nodo** remp){
	Nodo* a, *p;
	p = *remp;
	a = (*remp)->izq;
	while(a->dcho){
		p=a;
		a=a->dcho;
	}
	(*remp)-> dato = a ->dato;
	if(p==(*remp)){
		p->izq = a-> izq;
	}
	else{
		p->dcho = a->dcho;
	}
	(*remp) = a;
}

void insertar(Nodo** raiz, int dato){
	if(!(*raiz))
	  *raiz = crearNodo(dato);
	else if(dato < (*raiz)->dato)
	  insertar(&(*raiz)->izq,dato);
	else
	  insertar(&(*raiz)->dcho,dato);
}

void buscar(Nodo** raiz, int dato){
    if(!(*raiz)){
	printf("No existe");
    }
    else if(dato < (*raiz)->dato){
	buscar(&(*raiz)->izq,dato);
    }
    else if(dato > (*raiz)->dato){
	buscar(&(*raiz)->dcho,dato);
    }
	if((*raiz)->dato==dato){
            printf("El numero %d existe", (*raiz)->dato);
    }
}
int k=0, n=0, j=0;

int profundidad(Nodo** raiz){
    if(!(*raiz))
        return 0;
    else{
        int profundidadI = profundidad(&(*raiz) -> izq);
        int profundidadD = profundidad(&(*raiz) -> dcho);
        if(profundidadI > profundidadD)
            return profundidadI + 1;
        else
            return profundidadD + 1;
    }
}


void reemplazar(Nodo** remp){
	Nodo* a, *p;
	p = *remp;
	a = (*remp)->izq;
	while(a->dcho){
	  p=a;
	  a=a->dcho;
	}
	(*remp)-> dato = a ->dato;
	if(p == (*remp)){
	  p->izq = a-> izq;
	}
	else{
	  p->dcho = a->dcho;
	}
	(*remp) = a;
}

void preorden(Nodo* raiz){
	if(raiz){
	  printf("%d ",raiz->dato);
	  preorden(raiz->izq);
	  preorden(raiz->dcho);
	}
}

void postorden(Nodo* raiz){
	if(raiz){
	  postorden(raiz->izq);
	  postorden(raiz->dcho);
	  printf("%d ",raiz->dato);
	}
}


int main(){
   int x, or;
   int temp=0;
   Nodo* raiz = NULL;
   do{
     printf("Digite un dato para ingresar : ");
     scanf("%d",&x);
     insertar(&raiz,x);
     temp++;
   }while(temp!=7);
   printf("\n");
   or=profundidad(&raiz);
   printf("Profundidad: %d\n",or);
   preorden(raiz);
   printf("\n\n");
   eliminar(&raiz,6); 
   preorden(raiz);
   printf("\n\n");
   buscar(&raiz,7);
   system("PAUSE>NULL") ;
   return 0;
}

