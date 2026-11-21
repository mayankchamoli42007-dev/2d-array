// wap to add two matrices // rows and columnmn of both matrices should be same for addition
#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
     for(int i=0; i<3 ;i++){
        for(int j=0 ;j<3;j++){
            printf("enter elements in you 1st array t index %d,%d\n",i,j);
            scanf("%d",&a[i][j]);
            printf("enter elements in you 2nd array t index %d,%d\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<3 ;i++){
        for(int j=0 ;j<3;j++){
            c[i][j]+= a[i][j]+b[i][j];
        }
        printf("\n");
    }
    
    for(int i=0; i<3 ;i++){
        for(int j=0 ;j<3;j++){
            printf("%d",c[i][j]);
        }
    }
    return 0;
}








}

