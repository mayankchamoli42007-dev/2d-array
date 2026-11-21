#include<stdio.h>
int main()
{   int sum=0;
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
           for(int j=0 ;j<c;j++){
            sum+=a[i][j];
           }
        }
        printf("sum of all element of array is %d",sum);
        return 0;
    }
