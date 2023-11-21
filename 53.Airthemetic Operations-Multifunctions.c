#include<stdio.h>
#include<math.h>
int add(int x,int y);
int mul(int x, int y);
int min(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int main ()
{
    int a,b;
    printf("Enter the value of first number: \n");
    scanf("%d", &a);
     printf("Enter the value of second number: \n");
    scanf("%d", &b);
    {
    int SUM ;
    SUM =add(a,b);
    printf("SUM:%d\n", SUM);
    }
    
    {
    int SUBTRACT ;
    SUBTRACT =min(a,b);
    printf("SUBTRACT:%d\n", SUBTRACT);
    }
    {
    int PRODUCT ;
    PRODUCT =mul(a,b);
    printf("PRODUCT:%d\n", PRODUCT);
    }
    {
    int x,y,DIVISION ;
    DIVISION =div(a,b);
    if (x>y)
    {
    printf("DIVISION:%li\n", DIVISION);  
    }
    else 
     printf("Enter valid value of x and y for output to an INTEGER\n");
    }
    {
    int MODULUS;
    MODULUS =mod(a,b);
    printf("MODULUS:%d\n", MODULUS);  
    }
    
}
int add(int x,int y)
{  int SUM;
    SUM=x+y;
    return (SUM);
}
int mul(int x, int y)
{
    int PRODUCT;
    PRODUCT=x* y;
    return (PRODUCT);
}
int min(int x, int y)
{
    int SUBTRACT;
    SUBTRACT=x- y;
    return (SUBTRACT);
}
int div(int x, int y)
{
    int DIVISION;
    DIVISION=x/y;
    return (DIVISION);
}
int mod(int x, int y)
{
    int MODULUS;
    MODULUS=x%y;
    return (MODULUS);
}