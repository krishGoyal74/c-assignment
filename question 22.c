#include <stdio.h>
int main()
{
    // to fin transpose of a matrix
    int c;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
