#include <stdio.h>    
int main()    
{    
int a[5],n,i,count=0,k; 
printf("Enter the size of array:"); 
scanf("%d",&n); 
printf("Enter the array elements:");   
for (i=0;i<n;i++) 
{      
scanf("%d",&a[i]);    
}
printf("The Array is:\t");         
for (i=0;i<n;i++) 
{ 
  printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++)
{
  printf("\nEnter any number to check its divisibility with the array elements:");
  scanf("%d",&k);
  for(i=0;i<n;i++)
{
if(a[i]%k==0)
count++;
}
printf("The total number of array elements divisible by %d is %d \n",k,count);     
}    
}
