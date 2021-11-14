#include <stdio.h>
#include <conio.h>
#include <math.h>
void nhapmang(int a[],int n)
{

    for(int i=0; i<n; i++)
    {
        printf("nhap a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n)
{
    for(int i=0; i<n; i++)
        printf("%d,",a[i]);
    printf("\b.");
}
int kiemtranguyento(int n)
{
    if(n<2)
        return 0;
    else
    {
        for(int i=2; i<=n/2; i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
void xoavitri(int a[], int n, int k)
{
    for (int i=k; i<n; i++)
    {
        a[i] = a[i+1];
        n--;
    }
}
void xoamang(int a[], int &n)
{
    int i,k;
    for (i=0; i<n; i++)
        if (kiemtranguyento(a[i]))
        {
            for (k=i; k<(n)-1; k++)
                a[k] = a[k+1];
            (n)--;
            i--;
        }
}
main()
{
    int a[100],n;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    xoamang(a,n);
    printf("\n");
    xuatmang(a,n);
}
