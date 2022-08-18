#include<stdio.h>
int main()
{
   int arr[40],pos,i,size,value;
   printf("enter no of elements in array :");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
    // printf("\narray size:%d",sizeof(arr));
    for(i=0;i<size;i++)
       scanf("%d",&arr[i]);


   for(i=size-1;i>=pos-1;i--)
      arr[i+1]=arr[i];
   arr[pos-1]= value;
   printf("\nfinal array after inserting the value is");
   for(i=0;i<=size;i++)
      printf("\n%d",arr[i]);
      
   return 0;
}