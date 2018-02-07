#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0;
    int n = 4000000;
    nextTerm = t1 + t2;
    int sum = 0;
    while (nextTerm <= n) {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }
    }
    printf("%d", sum);

    return 0;
}