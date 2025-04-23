#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3};
    
    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}
