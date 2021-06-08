int* table_of(int num, int len) {
    int table[len];
    for (int i = 0; i <= len; i++) {
        table[i] = i * num;
    }
    return table; /* an int[] can be used as an int* */
}

int* table3 = table_of(3,10);
printf("5 times 3 is %d \n", table3[5]);
