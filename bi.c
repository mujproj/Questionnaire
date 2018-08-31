#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int array[],int start,int end,int x)
 {
   while(start<=end)
    {
      int middle=(start+end)/2;
      if(array[middle]==x)
        {
          return middle;
        }
       else if(array[middle]<x)
        {
          start=middle+1;
        }
       else
        {
          start=middle-1;
        }
     }
    return -1;
 }
int main()
 {
   int array[]={1,5,8,9,10};
   int x=50;
   int n=sizeof(array);
   int r=BinarySearch(array[],0,n-1,x);
   if(r==-1)
    {
       printf("ELEMENT  NOT FOUND");
    }
   else
    {
       printf("NOT FOUND");
    }
   return 0;
 }













#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int array[],int start,int end,int x)
 {
   while(start<=end)
    {
      int middle=(start+end)/2;
      if(array[middle]==x)
        {
          return middle;
        }
       else if(array[middle]<x)
        {
          return BinarySearch(array,middle+1,end,x);
        }
       else
        {
           return BinarySearch(array,start,middle-1,x);
        }
     }
    return -1;
 }
int main()
 {
   int array[]={1,5,8,9,10};
   int x=50;
   int n=sizeof(array);
   int r=BinarySearch(array[],0,n-1,x);
   if(r==-1)
    {
       printf("ELEMENT  NOT FOUND");
    }
   else
    {
       printf("NOT FOUND");
    }
   return 0;
 }





   
 