#include <stdio.h>
int main(int argc, char *argv[]) {

    printf(argv[1]);
}

#include <stdio.h>
int main(int argc, char *argv[]) {
    // should have been printf("%s", argv[1]);
    printf(argv[1]);
}
