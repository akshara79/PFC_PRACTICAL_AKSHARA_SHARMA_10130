//3. ATM Pin authentication akshara sharma 10130//
#include <stdio.h>
int main() {
    const int correct_pin = 1234;
    int entered_pin;
    int attempts = 0;
    const int max_attempts = 3;

    while (attempts < max_attempts) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == correct_pin) {
            printf("PIN accepted. Access granted.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempt(s) left.\n", max_attempts - attempts);
        }
    }

    if (attempts == max_attempts) {
        printf("Maximum attempts reached. Your account is locked.\n");
    }

    return 0;
}
/* output
Enter your ATM PIN: 1111
Incorrect PIN. You have 2 attempt(s) left.
Enter your ATM PIN: 2222
Incorrect PIN. You have 1 attempt(s) left.
Enter your ATM PIN: 1234
PIN accepted. Access granted.
*/