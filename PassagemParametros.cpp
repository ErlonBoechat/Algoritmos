#include <stdio.h>

void imprimir(int x, int *y);
int main(){
    int x, y;
    x = 1;
    y = 1;
    imprimir(x, &y);
    printf("Dentro do main\n");
    printf("*x: %d\n", x);
    printf("*y: %d\n", y);

    return 0;
}

void imprimir(int x, int *y){
    printf("*x: %d\n", x);
    printf("*y: %d\n", *(y));
    x = 10;
    *(y) = 10;
}  
