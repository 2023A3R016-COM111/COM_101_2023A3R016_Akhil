//Demonstrating the use of user defined functions 
#include<stdio.h>
void f1(void);
int main ()
{
    f1();
    printf("Welcome to MIET ECE department\n");
    f1();
    return 0;
}
void f1(void)
{
    int i;
    for (i=1;i<40;i++)
    {
        printf("-");
    }
    printf("\n");
}