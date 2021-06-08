int f(void) {
    int *a = malloc(100 * sizeof(int));
    int x = 5;
    int *y = a;
    a = &x;
    free(a);
    return x;
}
