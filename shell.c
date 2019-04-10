#include <stdio.h>
void Shell(int *arreglo, int n) {
  int i,x,y,temp;
  for(i=1;i<n;i=i*3+1){}
    while (i > 0){
      for(x=i;x<n;x++){
        y=x;
        temp=arreglo[x];
        while(y>=i&&arreglo[y-i]>temp){
          arreglo[y]=arreglo[y-i];
          y=y-i;
        }
        arreglo[y]=temp;
      }
      i=i/2;
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
   Shell(arreglo,num);
   resultado(arreglo,num);
}
