#include <stdio.h>
int main()
{
    //print unique values of an array
    int c=0;
    int a[3][3]={1,2,3,4,5,6,7,7,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (a[i][j]==a[i][j+1]){
                c++;
            }
            else{
                printf("%d ",a[i][j]);
            }
        }printf("\n");
    }
    return 0;
}
