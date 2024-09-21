#include <iostream>
#include <algorithm>
using namespace std;

int pertitionl (int a[], int lb, int ab)
{
    int pivot = a[lb];
    int start = lb;
    int end1 = ab;

    while (start < end1)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while(a [end1] > pivot)
        {
            end1--;
        }
        if(start < end1)
        {
            swap (a[start], a[end1]);
        }
        if(start < end1)
        {
            swap(a[start], a[end1]);
        }
    }
    swap(a[lb],a[ab]);
    return end1;
}


void qucksort(int a[], int lb, int ab)
{
    if(lb<ab)
    {
        int loe = pertitionl(a,lb,ab);
        qucksort(a,lb,loe-1);
        qucksort(a,loe+1,ab);
    }
}

int main()
{
    int a[] = {5,4,3,2,1};
    qucksort(a,0,4);
    for(int i=0; i<5; i++)
    {
        cout << a[i] <<" ";
    }
}

