#include <stdio.h>
int main()
{
    // count the number of digits
    int a,n,c=0;
    printf("enter number");
    scanf("%d",&a);
    n=a;
    while(n!=0){
        n=n/10;
        c++;
        }
    printf("%d",c);
    return 0;
}
