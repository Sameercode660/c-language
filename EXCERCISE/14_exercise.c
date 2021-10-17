/* This program will produce error because here we have considered k as an interger but
in switch case statement there is a character constant has used that is the main reason
that this program will produce some error because we are using 10 as a character because of
single quotation! */
#include <stdio.h>

int main()
{
    int k = 10;
    switch (k)
    {
    case '5':
    case '10':
        k++;
        continue;
    case '15':
    case '20':
        k--;
    }
    return 0;
}