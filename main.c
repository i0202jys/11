#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
int temp=*x;
*x=*y;
*y=temp;
}


int main(){
    int a=3;
    int b=5;

    swap(&a, &b);
    printf("a: %i, b: %i\n", a, b);
    return 0;
}