#include <stdlib.h>
#include <stdio.h>

int main(int argc,char* argv[]){
    FILE* file = fopen(argv[1],"r");
    int c;
    while(( (c=fgetc(file)) != EOF ) && (c != 42)){
        printf("%d %u %x\n",c,c,c);
    }
    printf("%d %u %x\n",c,c,c);
    fclose(file);
}
