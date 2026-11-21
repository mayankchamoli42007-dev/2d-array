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
   
    for(int i=0; i<c ;i++)
    {
        for(int j=0; j<r;j++){
            
            printf("%d ",arr[j][i]);
        }
      printf("\n");   
    } 
  return 0;
}
