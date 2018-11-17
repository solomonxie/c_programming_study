#include <stdio.h>


void null_pointer(){
    int *ptr = NULL;

    printf("Null pointer: %p", ptr);
}


void pointer_basics(){
    /*
     * "%p" is format for pointer
     * "&" will return the Mem-address of a variable
    */
    int height = 20;

    int *addr = &height;  // Declare a pointer: notice the * and &
    
    // Variable's address: 
    printf("%p\n", &height);

    // V's address stored in a pointer: 
    printf("%p\n", addr);

    // ??
    printf("%d\n", *addr);
}


int main(){

    //pointer_basics();
    null_pointer();

    return 0;
}

