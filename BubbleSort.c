#include<stdio.h>
int main()
{

    int arr[] ={2,7,0,-1,3};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for( int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]){

            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
        }
    }
}
printf("\nAfter the sorting\n");

   for(int i=0;i<n;i++)
{

    printf("%d ",arr[i]);
}
printf(" \n");
return 0;
}
