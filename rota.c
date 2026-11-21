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
        // transpose
    } 
    for(int i=0; i<c ;i++)    //important condition for tranpose of any matrices
    {
        for(int j=i; j<r;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
           
        }
      
    } 
  // rotation or reverse each row of 2d matrix
   for(int i=0; i<c ;i++)   
    {  int j=0;
        int k=r-1;
        while (j<k)
        {   int temp =arr[i][j];
             arr[i][j]=arr[i][k];
             arr[i][k]=temp;
             j++;
             k--;
            /* code */
        }
        printf("\n");
         
      printf("\n") ;
    } 
    for(int i=0; i<c ;i++)    
     {for(int j=0; j<r;j++){
            
            printf("%d ",arr[i][j]);
            }
       
     }  
 
     return 0;

}
