int *x = malloc(NUMX * sizeof(int));
if (x == NULL) { exit(-1); }
...
free(x);
