#include <stdlib.h>
#include <stdio.h>

void magic_function(){
    int a = 6;
    char b = 0x12;
    long long c = 112233445566;
    unsigned int d = a + b;
    char cc = 0;
    for(int i = 0; i < 255; i++){ cc++; }
    printf("%d\n%d\n",d,c);
    printf("%d\n",cc);
}
