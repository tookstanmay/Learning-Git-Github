#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int calculator(float number_1, char operation, float number_2)
{
    printf("\n");
    printf("**This is a calculator**\n");
    printf("(num1 operation num2 +, -, /, *): ");
    scanf("%f %c %f", &number_1, &operation, &number_2);
    switch (operation)
    {
    case '+':
        printf("\n");
        printf("Answers: %0.3f", number_1 + number_2);
        printf("\n \n");
        break;
    case '-':
        printf("\n");
        printf("Answers: %0.3f", number_1 - number_2);
        printf("\n \n");
        break;
    case '*':
        printf("\n");
        printf("Answers: %0.3f", number_1 * number_2);
        printf("\n \n");
        break;
    case '/':
        printf("\n");
        printf("Answers: %0.3f", number_1 / number_2);
        printf("\n \n");
        break;

    default:
        printf("Please enter correct operation: !! INVALID !! \n");
        break;
    }
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void loop(float number_1, char operation, float number_2)
{
    delay(1000);
    char opinion;
    printf("\nDo you wanna continue? (y/n) : ");
    while (opinion)
    {
        scanf("%c", &opinion);
        if (opinion == 'y' || opinion == 'Y')
        {
            calculator(number_1, operation, number_2);
            return loop(number_1, operation, number_2);
        }
        else if (opinion == 'n' == opinion == 'N')
        {
            printf("\n");
            break;
        }  

    }
    return;
}

int main()
{
    float number_1, number_2;
    char operation;
    calculator(number_1, operation, number_2);
    loop(number_1, operation, number_2);
    return 0;
}