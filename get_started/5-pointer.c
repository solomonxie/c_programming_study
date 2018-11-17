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
    int height = 1234;

    int *addr = &height;  // Declare a pointer: notice the * and &
    
    // Variable's address: 
    printf("%p\n", &height);

    // V's address stored in a pointer: 
    printf("%p\n", addr);

    // V's actuall value: 1234
    printf("%d\n", *addr);
}

void pointer_arithmetics(){
    int arr[] = {10, 20, 30};

    int *ptr = arr;

    // Results the same:
    printf("%p\n", &arr);
    printf("%p\n\n", ptr);

    // Results the same:
    printf("%p\n", &arr[0]);
    printf("%p\n\n", ptr);

    ptr++;  // Move pointer to the next position

    // Results the same:
    printf("%p\n", &arr[1]);
    printf("%p\n\n", ptr);

    ptr = ptr + 1;  // Move pointer to the next position

    // Results the same:
    printf("%p\n", &arr[2]);
    printf("%p\n\n", ptr);
}


int main(){

    //pointer_basics();
    //null_pointer();
    pointer_arithmetics();

    return 0;
}

