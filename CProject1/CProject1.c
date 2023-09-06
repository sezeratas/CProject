#include <stdio.h>

int main()
{
    int select,num1,num2;
    printf("------Calculator-------\n");
    printf("--  1) Summation     --\n");
    printf("--  2) Substration   --\n");
    printf("--  3)Multiplication --\n");
    printf("--  4) Division      --\n");
    printf("-----------------------\n");
    
    printf("--  Select a number:  --\n");
    scanf_s("%d", &select);
    printf("Input 2 number:\n");
    scanf_s("%d %d", &num1, &num2);

    switch (select)
    {
    case 1:
        printf("Result is %d", num1 + num2);
        break;
    case 2:
        printf("Result is %d", num1 - num2);
        break;
    case 3:
        printf("Result is %d", num1 * num2);
        break;
    case 4:
        printf("Result is %d", num1 / num2);
        break;
    default:
        break;
    }
    
    return 0;
}

