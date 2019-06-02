#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("\nHello World");


    if(fork() == 0){
        printf("\nI'm the son");
    }
    else
    {
        printf("\nI'm the father");
    }
    
    return 0;
}
