#include <iostream>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
    int i,j,k,temp[high-low+1];
    i = low;
    k = 0;
    j = mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i] < a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(j<=high)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++)
    {
        a[i]=temp[i-high];
    }
}

void Mergesort(int *a, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        Mergesort(a,low,mid);
        Mergesort(a,mid+1,high);
        Merge(a,low,high,mid);
    }
}


int main()
{
    int n,i;
    cout<< "Enter the number of the element to be sorted";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    Mergesort(arr,0,n-1);

    cout<<"\nSorted data ";
    for(i=0; i<n; i++)
    {
        cout<<"->"<<arr[i];
    }
}
