#include <stdio.h>
int main()
{
    // check sparse matrix
    int b=0,c=0;
    int a[3][3]={1,2,0,0,5,0,7,0,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (a[i][j]==0){
                c++;
            }
            else{
                b++;
            }
        }
    }
    if(c>b){
        printf("it's a sparse matrix");
    }
    else{
        printf("it's not a sparse matrix");
    }
    return 0;
}
