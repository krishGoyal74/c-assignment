#include <stdio.h>
int main()
{
    // check symmetric matrix
    int c=0;
    int a[3][3]={1,0,0,0,1,0,0,0,1};
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!=b[i][j]){
                c=1;
                break;
            }
        }
    }
    if(c==1){
        printf("not symmetric matrix");
    }
    else{
        printf("symmetric");
    }
    return 0;
}
