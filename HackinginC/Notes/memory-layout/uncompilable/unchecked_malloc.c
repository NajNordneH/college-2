int *table = malloc(TABLESIZE * sizeof(int));
for(size_t i=0;i<TABLESIZE;i++){
    table[i] = 42;
}

int *table = malloc(TABLESIZE * sizeof(int));
if (table == NULL) { exit(255); }
for(size_t i = 0; i < TABLESIZE; i++) {
    table[i] = 42;
}

int *table = malloc(TABLESIZE * sizeof(int));
if (!table) { exit(255); }
for(size_t i = 0; i < TABLESIZE; i++) {
    table[i] = 42;
}
