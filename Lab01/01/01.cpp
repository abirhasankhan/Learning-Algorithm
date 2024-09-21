#include<stdio.h>


void inssort( int a[],int n)
{

    for(int i= 1; i<n ; i++)
    {

        int value = a[i];
        int hole = i;

        while(hole>0 && a[hole-1]> value)
        {
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
}
main()
{
    int a[30]= {11,20,54,3,8,7,21,49};

    inssort(a,8);
    for(int i = 1; i<8 ; i++)
    {
        printf("%d ", a[i]);
    }
}
