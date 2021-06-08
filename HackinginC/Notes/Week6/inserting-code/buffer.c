#include <stdio.h>
#include <stdlib.h>

void func(char* string) {
    char buf[20];
    for (int i = 0; i < 20; i++) {
        buf[i] = 'A' + i;
    }
    printf("%p",buf);
    printf(string);  // memory inspection
}

int main(int argc, char* argv[]) {
    if (argc < 2) { exit(1); }
    func(argv[1]);
}
