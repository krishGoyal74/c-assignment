#include <stdio.h>
int main()
{
    // to print upper triangular matrix of an array
    int c=0;
    int a[3][3]={1,2,3,4,1,6,7,8,1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j==i&&a[i][j]==1){
                c=1;
            }
            else{
                c=0;
            }
        }
        
    }
    if (c==1){
        printf("it is an identity matrix");
    }
    else{
        printf("it is not an identity matrix");
    }
    return 0;
}
