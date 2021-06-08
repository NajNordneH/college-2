#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sign(int num){
    return num > 0 ? 1 : num < 0 ? -1 : 0;
}

int my_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char* s1_ptr = s1;
    unsigned char* s2_ptr = s2;

    for(size_t i = 0; i < n; i++){
        if(*(s1_ptr+i) != *(s2_ptr+i))
            return *(s1_ptr+i) - *(s2_ptr+i);
    }
    return 0;
}

int memcmp_backwards(const void* s1,const void *s2, size_t n){
    unsigned char* s1_ptr = s1;
    unsigned char* s2_ptr = s2;

    for (size_t i = n-1; i >= 0; i--){
        if(*(s1_ptr+i) != *(s2_ptr+i))
            return *(s1_ptr+i) - *(s2_ptr+i);
    }
    return 0;
}

void addvector(int *r, const int *a, const int* b, unsigned int len){
    unsigned int i;
    for(i = 0; i < len; i++){
        *(r+i) = *(a+i)+*(b+i);
    }
}


int main(void){
    int vec1[4] = {1,2,3,4};
    int vec2[4] = {1,2,3,4};
    long test1 =   0x12223345;
    long test1_1 = 0x13223446;
    long* test1_ptr = &test1;
    long* test1_1_ptr = &test1_1;

    printf("%d\n",sign(memcmp(vec1,vec2,sizeof(vec2))));
    printf("%d\n",sign(my_memcmp(vec1,vec2,sizeof(vec2))));

    printf("\n%x\n",memcmp(test1_ptr,test1_1_ptr,sizeof(test1)));
    printf("%x\n",my_memcmp(test1_ptr, test1_1_ptr, sizeof(test1)));

    printf("\n%x\n",memcmp_backwards(test1_ptr, test1_1_ptr, sizeof(test1)));
}
