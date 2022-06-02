#include <stdio.h>
int main()
{
    //print all odd numbers from 1 to n
    int a;
    printf("enter number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}
