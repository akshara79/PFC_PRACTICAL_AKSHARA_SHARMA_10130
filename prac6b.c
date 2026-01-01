//2. Sum of even numbers using continue akshara sharma 10130//
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("Sum of even numbers from %d to %d is: %d\n", a, b, sum);
    return 0;
}
/* output
Enter the starting number (a): 2
Enter the ending number (b): 6
Sum of even numbers from 2 to 6 is: 12
*/
