#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    bool c = true;
    bool d = false;
    bool e = 0xf;
    char* x = e ? "true" : "false";
    printf("Number of bytes: %zu\nHex representation of true: %x\nHex representation of false: %x\nUsing value 0xf in a bool:%s\n", sizeof(c),c,d,x);
}
