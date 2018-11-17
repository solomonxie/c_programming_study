#include <stdio.h>

int main(){

    int height = 20;
    int *addr = &height;  // Declare a pointer: notice the * and &

    // "%p" is format for pointer
    // "&" will return the Mem-address of a variable
    printf("%p\n", &height);
    printf("%p\n", addr);

    // ??
    printf("%d\n", *addr);

    return 0;
}
