int *x = malloc(SIZEX * sizeof(int));
...
free(x);
...
printf("Let's see what 1st value in x is now: %d\n", *x);

printf("Let's see if x is still the same pointer: %p\n", x);
