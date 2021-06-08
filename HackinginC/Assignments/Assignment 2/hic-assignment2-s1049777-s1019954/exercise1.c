#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int32_t a = 1;
    int16_t b = 2;
    unsigned char c = 3;
    int8_t d = 4;
    unsigned long long e = 5;
    short f[3] = {6, 6, 6};
    long g = 7;
    unsigned long int h = 8;
    uint8_t i = 9;

    fprintf(stderr, "address\t\tvariable\tvalue\tsizeof\tnext_addr\n");

    printf("%p\t\ta\t%" PRId32 "\t%zu\t%p\n", &a, a,sizeof(a), &a+1);
    printf("%p\t\tb\t%" PRId16 "\t%zu\t%p\n", &b,b,sizeof(b),&b+1);
    printf("%p\t\tc\t%u\t%zu\t%p\n",&c,c,sizeof(c),&c+1);
    printf("%p\t\td\t%" PRId8 "\t%zu\t%p\n", &d,d,sizeof(d),&d+1);
    printf("%p\t\te\t%llu\t%zu\t%p\n", &e,e,sizeof(e),&e+1);
    printf("%p\t\tf\t%d\t%zu\t%p\n", &f,f[0],sizeof(f), &f+1);
    printf("%p\t\tg\t%ld\t%zu\t%p\n", &g,g,sizeof(g),&g+1);
    printf("%p\t\th\t%lu\t%zu\t%p\n", &h,h,sizeof(h),&h+1);
    printf("%p\t\ti\t%" PRIu8 "\t%zu\t%p\n", &i,i,sizeof(i),&i+1);

    return 0;
}
