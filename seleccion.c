#include <stdio.h>
void seleccion(int *array, int n) {
  int x,y,min,temp;
  for(x=0;x<n;x++) {
    min=x;
    for(y=x+1;y<n;y++) {
      if(array[min]>array[y]) {
        min = y;
      }
    }
    temp = array[min];
    array[min] = array[x];
    array[x] = temp;
  }
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
   seleccion(arreglo,num);
   resultado(arreglo,num);
}
