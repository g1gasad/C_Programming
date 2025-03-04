#include <stdio.h>

int main()
{
    int number, result;
    char choice;
    printf("Menu:\n");
    printf("A - Bitwise AND\n");
    printf("B - Bitwise OR\n");
    printf("C - Bitwise XOR\n");
    printf("D - Bitwise Complement\n");

    printf("Enter a number: ");
    scanf("%d", &number);
    // Clear the newline character left in the buffer
    // while (getchar() != '\n');
    fflush(stdin);

    printf("So.. what's your choice? ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A':
    {
        int otherNum;
        printf("Enter the other number: ");
        scanf("%d", &otherNum);
        result = number & otherNum;
        printf("The result of %d AND %d is %d", number, otherNum, result);
        break;
    }
    case 'B':
    {
        int otherNum;
        printf("Enter the other number: ");
        scanf("%d", &otherNum);
        result = number | otherNum;
        printf("The result of %d OR %d is %d", number, otherNum, result);
        break;
    }
    case 'C':
    {
        int otherNum;
        printf("Enter the other number: ");
        scanf("%d", &otherNum);
        result = number ^ otherNum;
        printf("The result of %d XOR %d is %d", number, otherNum, result);
        break;
    }
    case 'D':
    {
        result = ~number;
        printf("The result of %d AND %d is %d", number, result);
        break;
    }
    default:
    {
        printf("Invalid choice. Please choose one from A, B, C & D");
        break;
    }
    }
    return 0;
}