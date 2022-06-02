#include <stdio.h>
int main()
{
    //sum of all even numbers from 1 to n
    int a,b=0;
    printf("enter number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            b=b+i;
        }
    }
    printf("%d",b);
    return 0;
}
