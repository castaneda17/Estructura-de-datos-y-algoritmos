#include<stdio.h>
enum dias{
lunes=1,martes,miercoles,jueves,viernes,sabado,domingo
};
int main(){
    enum dias d;
    for(d=lunes;d<=domingo;d++){
        printf("%d \n",d);
    }

return 0;
}
