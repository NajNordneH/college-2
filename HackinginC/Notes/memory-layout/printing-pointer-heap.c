#include <stdlib.h>
#include <stdio.h>

int main() {
    int* a_ptr = malloc(sizeof(int));
    *a_ptr = 4;  /* https://xkcd.com/221/ */
    printf("The value stored at a_ptr = %d\n", *a_ptr);
    printf("The value of        a_ptr = %p\n",  a_ptr);
    free(a_ptr);  /* need to manually manage heap */

    return 0;
}
