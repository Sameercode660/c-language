#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum, d = 0, fact, store = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    sum = num;
    for (num; num > 0; num /= 10)
    {
        fact = num % 10;
        if (fact != 0 || fact == 0)
        {
            d++;
        }
    }
    num = sum;
    fact = 0;
    for (sum; sum > 0; sum /= 10)
    {
        fact = sum % 10;
        store = store + pow(fact, d);
    }
    if (store == num)
    {
        printf("Entered number is an armstrong number\n");
    }
    else
    {
         printf("Enter number is not an armstrong number!\n");
    }
    

    return 0;
}