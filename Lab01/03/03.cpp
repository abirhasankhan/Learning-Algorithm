#include<stdio.h>


void selectsort( int a[],int n)
{

    for(int i =0; i<n-1 ; i++)
    {

        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i]= a[min];
        a[min]= temp;
    }
}
main()
{
    int a[30]= {11,22,43,99,69,41,33};

    selectsort(a,7);
    for(int i =1; i<7; i++)
    {
        printf("%d ", a[i]);
    }

}
