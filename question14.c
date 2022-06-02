#include <stdio.h>
int main()
{
    //count the number of even and odd numbers
    int b=0,c=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]%2==0){
                b++;
            }
            else{
                c++;
            }
        }
    }
    printf("number of even numbers%d\n",b);
    printf("number of odd numbers%d",c);
    return 0;
}


