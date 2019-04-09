#include<stdio.h>
int main(){
 int pascal[6];
 int n=6;
 int x, i, j;
 x=0;
 for(i=1;i<=n;i++){
    for(j=x;j>=0;j--){
        if(j==x||j==0){
            pascal[j]=1;
        }
        else{
            pascal[j]=pascal[j]+pascal[j-1];
        }
    }
    x++;
    printf("\n");
    for(j=1;j<=n-i;j++){
        printf("   ");
    }
        for(j=0;j<x;j++){
            printf("%6d",pascal[j]);
        }
    }
 return 0;
}
