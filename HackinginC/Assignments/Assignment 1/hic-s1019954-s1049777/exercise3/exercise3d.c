#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main(int argc, char* argv[]){
    FILE* file = fopen(argv[1],"r");
    uint16_t c;
    while(c != 42){
        fread(&c,2,1,file);
        printf("%04" PRIx16,c);
        printf("\n");
    }
    fclose(file);
}
