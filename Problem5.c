#include <iostream>

int main() {
    int i = 1;
    int j = 21;
    while (i < 20) {
        if (j % i == 0) {
            i++;
            if (i == 20) {
                printf("%d\n", j);
            }
        } else {
            j++;
            i = 1;
        }
    }
}