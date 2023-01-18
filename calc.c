#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


int add(int a, int b) {
    return a + b;
}

void test_add(int a, int b, int expected) {
    int result = add(a, b);
    assert(result == expected);
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        printf("Usage: %s a b expected\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int expected = atoi(argv[3]);

    test_add(a, b, expected);
    printf("Test passed\n");
    return 0;
}

