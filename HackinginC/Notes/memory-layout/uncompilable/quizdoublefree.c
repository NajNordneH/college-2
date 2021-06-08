int f(void) {
    int *a = malloc(100 * sizeof(int));
    if (a == NULL) { return -1; }
    char *x = (char *)a;
    ...
    free(x);
    free(a);
}
