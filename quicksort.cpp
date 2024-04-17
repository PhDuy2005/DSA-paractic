#include<iostream>
#define MAXN 150000
void NhapMang(int A[], int &N)
{
    std::cin>>N;
    for(int i = 0; i<N;i++)
    {
        std::cin>>A[i];
    }
}
void XuatMang(int A[], const int &N)
{
    std::cout<<N<<std::endl;
    for(int i = 0;i<N;i++)
    {
        std::cout<<A[i]<<" ";
    }
}
void hoanvi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;

}
void QuickSort(int a[], int left, int right)
{
    int i=left;
    int j = right;
    int pivot = a[(left+right)/2];
    while(i<=j)
    {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i<=j)
        {
            hoanvi(a[i], a[j]);
            i++;
            j--;
        }
    }
    if(i<right) QuickSort(a, i, right);
    if(j>left) QuickSort(a, left, j);
}
void quick_sort_ascending(int a[], int n)
{
    QuickSort(a, 0, n-1);
}
int main()
{
    int a[MAXN], n;
    NhapMang(a, n);
    quick_sort_ascending(a, n);
    XuatMang(a, n);
    return 0;
}
