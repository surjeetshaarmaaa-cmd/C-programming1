#include <stdio.h>

int main() {
    int n, i, k = 0; // Initialize k to 0
    
    printf("Enter a value: ");
    scanf("%d", &n);
    
    // Handle edge cases for numbers <= 1
    if (n <= 1) {
        printf("Neither prime nor composite\n");
        return 0;
    }
    
    // Check for factors from 2 up to n / 2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            k = 1; // Found a factor, so it's composite
            break;
        }
    }
    
    if (k == 0) {
        printf("Prime number\n");
    } else {
        printf("Composite number\n");
    }
    
    return 0;
}