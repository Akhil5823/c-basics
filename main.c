#include <stdio.h>
#include <stdlib.h>



int max(int num1,int num2,int num3)
{
    int result;
    if(num1>=num2 && num1>=num3)
    {
        result = num1;
    }
    else if(num2>=num1 && num2>=num3)
    {
        result = num2;

    }
    else{
        result = num3;
    }
    return result;

}

int main()
{   int x;
    int y;
    int z;
    printf("first number: ");
    scanf("%d",&x);
    printf("second number: ");
    scanf("%d",&y);
    printf("third number: ");
    scanf("%d",& z);

    printf("greatest number is %d",max(x,y,z));
    return 0;
}
