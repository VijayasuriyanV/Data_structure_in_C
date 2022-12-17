//IMPLEMENTATION OF QUICK SORT

#include<stdio.h>
int Partition(int a[], int beg, int end) //Function to Find Pivot Point
{
    int i=beg, pivot=a[beg], j;
    for(j=beg+1;j<=end;j++)
    {
    if(pivot>a[j]) {
    a[i]=a[j]; 
    a[j]=a[i+1]; 
    a[i+1]=pivot;
    i=i+1;
    }
    }
    return i;
 }
void QuickSort(int a[], int beg, int end)
{
    if(beg<end)
    {
    int p=Partition(a,beg,end); //Calling Procedure to Find Pivot
    QuickSort(a,beg,p-1);
    
    //Calls Itself (Recursion) QuickSort
    (a,p+1,end); //Calls Itself (Recursion)
    }
}
int main () 
{
    int a[100],i,n;
    printf("\n------------------ QUICK SORT -------------------\n\n");
    printf("Enter the No. of Elements : ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]); 
    }
    QuickSort(a,0,n-1); //Calling of QuickSort Function
    printf("\n Order of Sorted elements: \n");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]); 
    }

 }
