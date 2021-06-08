#include <stdlib.h>
#include <stdio.h>

void print_byte_by_byte(int size, char* byte_ptr){
    for (int i = 0; i < size; i++){
        printf("%p          0x%X          %d\n",(byte_ptr+i),*(byte_ptr+i), *(byte_ptr+i));
    }
}

int main(void){
    short i = 0x1234;
    char x = -127;
    long sn1 = 1049777;
    long sn2 = 1019954;
    int y[2] = {0x11223344,0x44332211};
    printf("address          content (hex)          content(dec)\n");
    printf("----------------------------------------------------------\n");
    char* ptr_i = &i;
    char* ptr_x = &x;
    char* ptr_sn1 = &sn1;
    char* ptr_sn2 = &sn2;
    char* ptr_y = &y;

    print_byte_by_byte(sizeof(i), ptr_i);
    print_byte_by_byte(sizeof(x), ptr_x);
    print_byte_by_byte(sizeof(sn1), ptr_sn1);
    print_byte_by_byte(sizeof(sn2), ptr_sn2);
    print_byte_by_byte(sizeof(y), ptr_y);
}
