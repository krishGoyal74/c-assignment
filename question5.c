#include <stdio.h>
int main()
{
    // print day name 
    int a;
    printf("enter day number");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
    }
    return 0;
}
