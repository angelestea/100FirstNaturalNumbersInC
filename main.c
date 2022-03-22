#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("************************************************\n");
    printf("**First 100 natural numbers in do while cicle!**\n");
    printf("************************************************\n");
    int i = 0;

    do{
        printf("Number %i -->: %i\n",++i, --i);
        i++;
    }while(i <=100);



    return 0;
}
