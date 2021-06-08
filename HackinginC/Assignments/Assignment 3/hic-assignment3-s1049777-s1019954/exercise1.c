#include <stdlib.h>
#include <stdio.h>

extern void magic_function();

int main(){
    char a[1];
    char* b = (char*) malloc(1000);
    for(int i = 0; i < 1000; i++){
        b[i] = a[i];
    }
    magic_function();
    int byte_counter = 0;
    for(int i = 0; i < 1000; i++){
        if(b[i] != a[i]){
            byte_counter++;
        }
    }
    printf("%d bytes were changed in the stack\n", byte_counter);
    free(b);
}
