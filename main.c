#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=300;

    int *pi = &i; //4byte 적절한 자료형을 사용하좡*v*
    char *pc = (char*)&i; //1byte

    printf("%i,%i,%i\n", i, *pi,*pc);


    return 0;
}

