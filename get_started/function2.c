
#include <stdio.h>

void clear(int *a, int *b);

void clear(int *a, int *b){
    *a = 0;
    *b = 0;
    return;
}

int main(){
    int a = 10;
    int b = 20;

    clear(&a, &b);

    printf( "a = %d\n", a);
    printf( "b = %d\n", b);
    return 0;
}
