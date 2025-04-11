#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return 32; // Special case: All bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) {  // Start from MSB (31st bit)
        if ((num >> i) & 1) break;   // Stop when a '1' is found
        count++;
    }
    return count;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of leading zeros: %d\n", countLeadingZeros(num));

    return 0;
}
