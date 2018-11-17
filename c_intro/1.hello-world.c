/* 
 * How to run:
 *     1.Compile: (almost every *nix OS has "gcc" pre-installed)
 *         $ gcc hello-world.c
 *         or
 *         $ make hello-world
 *     2.Run: (similar to bash script)
 *         $ ./a.out
 * */

// Import the Standard I/O library
#include <stdio.h>

// Main entry function
int main(){

    // "printf()" is defined in the library "stdio.h".
    printf("Hello, world!");

    // "return 0" is to exit the whole program
    return 0;
}
