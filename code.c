#include<stdio.h>
int main()
{   int row_sum=0,col_sum=0;
    int r;
    printf("enter no of rows");
    scanf("%d",&r);
    int c;
    printf("enter  no column");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r ;i++){
        for(int j=0 ;j<c;j++){
            printf("enter elements in you 2d array t index %d,%d\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
       for(int i=0; i<r ;i++){
           int j=0;
           int k=r-1;
           whilw(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
           } 
           }
           printf("sum of columns  %d is %d\n",i+1,col_sum);
           printf("sum of row  %d is %d\n",i+1,row_sum);
           row_sum=0;
           col_sum=0
        }
        return 0;
    }
