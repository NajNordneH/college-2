int func(int a, int b) {
    int n = a, m = b;
    ...
    return n * m;
}

int main(void) {
    ...
    int x = func(42, 23);
    int y = func(37, 13);
    ...
    return 0;
}
