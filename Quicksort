#include<stdio.h>

void quicksort(int arreglo[],int inferior, int superior){
    int i,j,pivote;
    i=inferior;
    j=superior;
    pivote=arreglo[(i+j)/2];
    while(i<=j){
      while(arreglo[i]<pivote)
        i++;
       while(arreglo[j]>pivote)
        j--;
        if(i<=j){
          intercambio(arreglo,i,j);
          i++;
          j--;
        }
    }

    if(inferior<j){
    quicksort(arreglo,inferior,j);
    }
    if(i<superior){
    quicksort(arreglo,i,superior);
    }
}


 void intercambio(int arreglo[],int i, int j){
    int temp;
    temp=arreglo[i];
    arreglo[i]=arreglo[j];
    arreglo[j]=temp;
 }

 void resultado(int arreglo[],int elem){
    int i;
    printf("arreglo ordenado:");
    for(i=0;i<elem;i++){
      printf("%d ",arreglo[i]);
    }
 }

int main(){
   int arreglo[50]={0};
   int num,i;
   printf("Cuantos elementos existen en el arreglo:");
   scanf("%d",&num);
   for(i=0;i<num;i++){
     printf("Dato %d: ",i+1);
     scanf("%d",&arreglo[i]);
   }
   quicksort(arreglo,0,num-1);
   resultado(arreglo,num);
   getch();
return 0;
}
