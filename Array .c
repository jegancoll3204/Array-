#include<stdio.h>
int max(int [],int n);
int sum(int [],int n);
int min(int [],int n);
int main()
{
   int maxi,summ,minn;
   int mark[50];
   int n;
   printf("Enter Size:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       printf("Enter Value %d:",i+1);
       scanf("%d",&mark[i]);
   }
   // Function Calling
   maxi=max(mark,n);
   summ=sum(mark,n);
   minn=min(mark,n);
   // Result Part
   printf("\n----------------");
   printf("\nMaximum :%d",maxi);
   printf("\nMinimum :%d",minn);
   printf("\nSUM     :%d",summ);
   printf("\n--------------");

}
 int max(int a[],int n)
 {
     int i;
     int max;
     max=a[0];


     for(i=0;i<n;i++)
     {
         if(max<a[i])
            max=a[i];
     }
     return max;
 }

 int sum (int a[],int n)
 {
     int sum=0,i;
     for(i=0;i<n;i++)
     {
         sum=sum+a[i];
     }
     return sum;
 }

 int min (int a[],int n)
 {
     int min,i;
     min=a[0];

     for(i=0;i<n;i++)
     {
         if(min>a[i])
            min=a[i];
     }

    return min;
 }
