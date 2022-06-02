#include <stdio.h>
int main()
{
    //columnwise sum of elements of aaray
    int b=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        b=0;
        for(int j=0;j<3;j++){
            b=b+a[j][i];
        }
        printf("sum of column %d=%d\n",i,b);
    }
    return 0;
}


