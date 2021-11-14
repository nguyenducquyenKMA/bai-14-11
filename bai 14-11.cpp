#include "stdio.h"
int a[100];
int n;
void nhapMang(int x[100], int &n)
{
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Nhap x[%d]:", i);
        scanf("%d", &x[i]);
    }
}
void xuatMang(int x[100], int n)
{
    printf("Gia tri cua mang la: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", x[i]);
    }
}
int ktrant(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
void Delete(int a[], int vt, int&n){
    for(int i=vt;i<n;i++)
        a[i]=a[i+1];
    n--;
}

void DeleteSont(int a[], int&n){
    for(int i=0;i<n;i++){
        if(ktrant(a[i])){
            Delete(a,i,n);
            i--;
        }
    }
}

int main(){
    int a[100];
    int n;
    nhapMang(a,n);
    DeleteSont(a,n);
    xuatMang(a,n);
    return 0;
}
