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
    int row,col;
    int max=arr[0][0];
           for(int i=0; i<r ;i++){
           for(int j=0 ;j<c;j++){
               if(max<arr[i][j]){
                max=arr[i][j];
                row=i;
                col=j;
               }
           }
        }
        printf(" maximum element in an array is %d at index (%d,%d)",max,row,col);
        return 0;
    }
