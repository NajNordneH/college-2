#include <stdio.h>
#include <stdlib.h>

int main(){
    size_t i = 1;
    int* x;
    for(size_t j = 1;x != NULL; j *= 5){
        x = malloc(j);
        if(x != NULL){
            printf("%lu\n",j);
            free(x);
        }
        else{
            printf("malloc failed at j = %d\n",j);
            i = j;
        }
    }

    printf("One malloc can allocate at most %03lu bytes", i);
}
