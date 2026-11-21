// arr[r][c];    // Where r is row and c is coloumn in 2dimensional array
//wap to input 10 at every row or every colun of a 5 by 5 matrix
#include<stdio.h>
int main()
{
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
    printf("\n");
    for(int i; i<r ;i++)
    {
        for(int j=0; j<c;j++){
            printf("%d",arr[i][j]);
        }
        
    }
    printf("\n");
  return 0;
}
