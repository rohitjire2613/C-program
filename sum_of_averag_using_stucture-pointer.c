/*Write a program to compute sum and average of all elements in an array using pointer.*/
#include<stdio.h>
void main()
{
	    int a[100],*arr,i,size,sum=0,avg;
	    arr=a;
	    printf("Enter the size of the array: ");
	    scanf("%d",&size);
	    printf("Enter the Aaray elements:\n");
	    for(i=0;i<size;i++)
	    {
		scanf("%d",arr+i);
	    }
	    printf("Array is:\n");
	    for(i=0;i<size;i++)
	    {
		printf("%3d",*(arr+i));
		sum=sum+*(arr+i);
	    }
	    printf("\nSum of array elements= %d\n",sum);
	    avg=sum/size;
	    printf("\naverage of array elements =%d",avg);
}
