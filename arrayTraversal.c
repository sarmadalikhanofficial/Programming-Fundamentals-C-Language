#include <stdio.h>
  int main() {
  
    int numbers[5] = {10, 20, 30, 40, 50};
    
    for (int v = 0; v < 5; v++) {
        printf("Element at index %d: %d\n", v, numbers[v]);
    }
}
