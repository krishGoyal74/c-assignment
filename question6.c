#include <stdio.h>
int main()
{
    // print maximum numbers 
    int a,b;
    printf("enter day number");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1:
            printf("maximum number is %d",a);
            break;
        case 0:
            printf("maximum number is %d",b);
            break;
    }
    return 0;
}

