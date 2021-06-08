xnew = realloc(x, NEWSIZE);
if (xnew == NULL) {
    free(x);
    exit(-1); // or continue with old size of x
} else {
    x = xnew;
}
