#include<stdio.h>
int main(){
  int numeros[10];
  int i,n=10;
  for(i=0;i<n;i++){
    printf("Ingresa el valor del arreglo en la posicion %d :",i);
    scanf("%d",&numeros[i]);
    if(numeros[i]<0){
            i=i-1;
    }
  }
  for(i=0;i<n;i++){
    printf("%d  -  ",numeros[i]);
  }
    return 0;
}
