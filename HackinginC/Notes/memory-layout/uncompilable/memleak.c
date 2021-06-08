int leaky_func(int elems) {
    // Returns num. elems allocated
    int* leaked = calloc(elems, sizeof(int));
    if (!leaked) {
        return 0;
    } else {
        return elems;
    }
}
