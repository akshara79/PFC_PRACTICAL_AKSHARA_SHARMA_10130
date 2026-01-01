//1. Print numbers from a to b using loops akshara sharma 10130//
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    printf("Enter the ending number (b): ");
    scanf("%d", &b);
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;

}
/* output
Enter the starting number (a): 2
Enter the ending number (b): 6
2 3 4 5 6 
*/