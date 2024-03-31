#include <stdio.h>

int main() {
    // Integer input
    int intValue;
    printf("Enter an integer value: ");
    scanf("%d", &intValue);
    printf("You entered: %d\n", intValue);

    // Character input
    char charValue;
    printf("Enter a character: ");
    scanf(" %c", &charValue); // Note the space before %c to consume any leading whitespace
    printf("You entered: %c\n", charValue);

    // Floating-point input
    float floatValue;
    printf("Enter a floating-point value: ");
    scanf("%f", &floatValue);
    printf("You entered: %f\n", floatValue);

    // Double input
    double doubleValue;
    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);
    printf("You entered: %lf\n", doubleValue);

    // String input
    char stringValue[100]; // Assuming a maximum length of 99 characters
    printf("Enter a string: ");
    scanf("%s", stringValue);
    printf("You entered: %s\n", stringValue);

    return 0;
}
