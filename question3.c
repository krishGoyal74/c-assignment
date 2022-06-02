#include <stdio.h>
int main()
{
    //print table of a number
    int a,b=0;
    printf("enter number");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%dX%d=%d\n",a,i,a*i);
    }
    return 0;
}
