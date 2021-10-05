#include <stdio.h>
#include<cs50.h>

int main ()
{
    int b = 5;
    int *c = &b;
    printf("%i\n",*c);
    printf("%p\n",c);
    printf("%p",&c);
}