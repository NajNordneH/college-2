#include <stdio.h>
#include <stdlib.h>

char *gets(char*);

void func(void) {
    char* ret;
    char buf[200];
    printf("Please enter your name: ");
    ret = gets(buf); // read the input
    printf("Your input was: ");
    printf(ret);
    printf("\n");
}

int main(void) {
    func();
}
