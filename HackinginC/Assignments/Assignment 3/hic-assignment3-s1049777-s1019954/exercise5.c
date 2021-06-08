#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void){
    char* s1 = malloc(9);
    if (s1 == NULL){ return 1;}
    char* s2 = malloc(9);
    if(s2 == NULL) { return 1;}
    strcpy(s1,"s1049777");
    strcpy(s2,"s1019954");

    char* hunter = malloc(1);
    int a = 1,i = 1;
    if(hunter == NULL){return -1;}
    while(a > 0){
        if(strcmp((hunter-i),"s1049777") == 0){
            strcpy((hunter-i),"s1049777 s1019954");
            a = -1;
        }
        i++;
    }

    free(hunter);
    printf("student number 1: %s\n",s1);
    printf("student number 2: %s\n",s2);
    return 0;
}
