#include <stdio.h>

int main() {
    int numbers[3] = {1, 2, 3};

    printf("Элементы массива:\n");
    for (int i = 0; i < 3; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]); 
    }

    return 0;
}
