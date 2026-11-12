#include <stdio.h>
#include <stdlib.h>

int main() {
    char *pc; //1byte
    int *pi; //4bytes
    double *pd; //8bytes

    pc=(char*)10000;
    pi =(int*)10000;
    pd=(double*)10000;

    printf(" before : pc=%d, pi=%d, pd=%d\n", pc, pi, pd);

    pc++;
    pi++;
    pd++;
    printf(" after : pc=%d, pi=%d, pd=%d\n", pc, pi, pd);

    return 0;
}