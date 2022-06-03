#include <stdio.h>
int main()
{
    //perform scalar multiplication
    int c;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    printf("enter multiple");
    scanf("%d",&c);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]*=c;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
