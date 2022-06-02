
#include <stdio.h>
int main()
{
    // find even or odd numbers
    int a;
    printf("enter day number");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
            printf("number is even");
            break;
        case 0:
            printf("number is odd");
            break;
    }
    return 0;
}
