#include <stdio.h>

int main()
{
    int select,num1,num2,i = 0,num5,sum5=0;
    printf("------Calculator-------\n");
    printf("--  1) Summation     --\n");
    printf("--  2) Substration   --\n");
    printf("--  3)Multiplication --\n");
    printf("--  4) Division      --\n");
    printf("--  5) n'th term sum. --\n");
    printf("-----------------------\n");
    
    printf("--  Select a number:  --\n");
    scanf_s("%d", &select);
    if (select < 5) {
        printf("Input 2 number:\n");
        scanf_s("%d %d", &num1, &num2);
    }
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
        printf("Result is %lf", (float) num1 / num2);
        break;
    case 5:
        printf("Input the number: ");
        scanf_s("%d", &num5);
        while (i < num5) {
            i++;
            sum5 += i;
        }
        printf("Result is %d", sum5);
        break;

    default:
        printf("Please try again...");
        break;
    }
    
    return 0;
}

