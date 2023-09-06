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

    if (select==1)
    {
        printf("----  Result = %d  -----\n",num1+num2);
    }
    else if (select == 2)
    {
        printf("----  Result = %d  -----\n", num1 - num2);
    }
    else if (select == 3)
    {
        printf("----  Result = %d  -----\n", num1 * num2);
    }
    else if (select == 4)
    {
        printf("----  Result = %f  -----\n", (float) num1 / num2);
    }
    
    return 0;
}

