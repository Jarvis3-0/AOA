#include<stdio.h>
#include<conio.h>
void quicksort(int a[50],int low ,int high)
{
  int p;
  if(low<high)
  {
     p=partition(a,low,high);
     quicksort(a,low,p-1);
     quicksort(a,p+1,high);
  }
}

int partition(int a[50],int lb,int ub)
{
  int key,temp,i,j;
  i=lb;
  j=ub;
  key=a[lb];
  while(i<j)
   {
     i++;
     while((i<=ub)&&(a[i]<key))
       i++;
     while((j>=lb)&&(a[j]>key))
       j--;
     if(i<j)
       {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
       }
    }
      a[lb]=a[j];
      a[j]=key;
      return j;
}

void readarray(int A[],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
       printf("Enter value of A[%d] = ",i);
       scanf("%d",&A[i]);
    }
}

void display(int A[],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
       printf("A[%d] = %d\n",i,A[i]);
    }
}

 void main()
 {
    int A[50],n;
    clrscr();
    printf("Enter n total no. of elements : ");
    scanf("%d",&n);
    printf("Enter elements of an array.....\n");
    readarray(A,n);
    quicksort(A,0,n-1);
    printf("Sorted elements of an array.....\n");
    display(A,n);
    getch();
 }


OUTPUT :

Enter n total no. of elements : 6
Enter elements of an array.....
Enter value of A[0] = 56
Enter value of A[1] = 77
Enter value of A[2] = 90
Enter value of A[3] = 23
Enter value of A[4] = 11
Enter value of A[5] = -35
Sorted elements of an array.....
A[0] = -35
A[1] = 11
A[2] = 23
A[3] = 56
A[4] = 77
A[5] = 90
