#include<stdio.h>
int main(){
int num1,num2,total=0,i;
printf("Digita el primer numero:");
scanf("%d",&num1);
printf("Digita el segundo numero:");
scanf("%d",&num2);

if(num1<num2){
  for(i=0;i<num1;i++){
    total=total+num2;
  }
  printf("El resultado es:%d",total);
}

else{
    for(i=0;i<num2;i++){
     total=total+num1;
  }
  printf("El resultado es:%d",total);
}

return 0;
}
