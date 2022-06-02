#include <stdio.h>
int main()
{
    // find number is positive negative or zero
    int a;
    printf("enter day number");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
            printf("number is positive");
            break;
        case 0:
            switch(a<0){
                case 1:
                    printf("number is negative");
                    break;
                case 0:
                    printf("number is zero");
                    break;
            }
    }
    return 0;
}
