#include <stdlib.h>
#include <stdio.h>
void burbuja(int *item, int cont) {
    int i, j, ordenado = 0;
    int temp;
    for (i = 1; i < cont; i++) {
        for (j = cont-1; j >= i; j--) {
            ordenado = 0;
            if (item[j-1] > item[j]) {
                temp = item[j-1];
                item[j-1] = item[j];
                item[j] = temp;
                ordenado++;
            }
        }
        if (ordenado == 0)
        break;
    }
}

int main() {
    int tam, n;
    printf("Ingrese el tamanio del arreglo:");
    scanf("%d", &tam);
    int arreglo[tam];
    printf("Ingrese valores al arreglo:");
    for (n = 0; n < tam; n++){
        scanf("%d", &arreglo[n]);
    }
    burbuja(arreglo, tam);
    printf("Arreglo Ordenado:");
    for (n = 0; n < tam; n++){
        printf("%d ", arreglo[n]);
    }
    return 0;
}
