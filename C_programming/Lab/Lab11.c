//220629(수)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int calculate(int x, int y, char op);

int main(void)
{
    int num1, num2;
    char cal;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("연산자를 입력하시오: ");
    scanf("%s", &cal);
    printf("\n");

    calculate(num1,num2,cal);

    return 0;
}

int calculate(int x, int y, char op)
{
    printf("output: \n");

    switch(op)
    {
        case '+':
        printf("%d", x + y);

        case '-':
        printf("%d", x - y);

        case '*':
        printf("%d", x * y);

        case '/':
        printf("%d", x / y);

        case '%':
        printf("%d", x % y);
    }
    return 0;
}