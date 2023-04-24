#include<stdio.h>
#include<conio.h>

void merge(int A[50],int low,int mid,int high)
{
	int aux[50],i,j,k;
	k = low;
	i = low;
	j = mid+1;
	if(low<high)
	{
	    while((i<=mid) && (j<=high))
	    {
	       if(A[i]<A[j])
		  aux[k++] = A[i++];
	       else
		  aux[k++] = A[j++];
	    }
	    while(i<=mid)
	      aux[k++] = A[i++];
	    while(j<=high)
	      aux[k++] = A[j++];
	    for(i=low;i<=high;i++)
	    {
	      A[i] = aux[i];
	      printf("%d  ",A[i]);
	    }
	    printf("\n");
	}
}


void mergesort(int A[50],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(A,low,mid);
		mergesort(A,mid+1,high);
		merge(A,low,mid,high);
	}
}

void printlist(int A[], int n)
{
   int i;
   for(i=0;i<n;i++)
      printf("Element at X[%d] = %d\n",i,A[i]);
}

void readlist(int A[], int n)
{
   int i;
   for(i=0;i<n;i++)
   {
      printf("Enter element at X[%d] : ",i);
      scanf("%d",&A[i]);
   }
}


void main()
{
   int i,n,x[20];
   clrscr();
   printf("Enter number of elements : ");
   scanf("%d",&n);
   printf("Enter elements of an array.....\n");
   readlist(x,n);
   mergesort(x,0,n-1);
   printf("\nSorted list using Merge sort.....\n");
   printlist(x,n);
   getch();

}


OUTPUT :

Enter number of elements : 7
Enter elements of an array.....
Enter element at X[0] : 67
Enter element at X[1] : 90
Enter element at X[2] : 33
Enter element at X[3] : 65
Enter element at X[4] : 99
Enter element at X[5] : 77
Enter element at X[6] : 11
67  90
33  65
33  65  67  90
77  99
11  77  99
11  33  65  67  77  90  99

Sorted list using Merge sort.....
Element at X[0] = 11
Element at X[1] = 33
Element at X[2] = 65
Element at X[3] = 67                                                            
Element at X[4] = 77                                                            
Element at X[5] = 90                                                            
Element at X[6] = 99                                                            
                                                                                
