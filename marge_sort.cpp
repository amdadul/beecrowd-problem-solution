#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
void merge(int *a, int l,int r,int m,int *rl, string *n)
{
    int i, j, k, temp[r-l+1],tr[r-l+1];
    string tn[r-l+1];
    i = l;
    k=0;
    j = m+1;

    while(i<=m && j<=r)
    {
        if(a[i]>a[j])
        {
            temp[k] = a[i];
            tr[k] = rl[i];
            tn[k] = n[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            tr[k] = rl[j];
            tn[k] = n[j];
            j++;
            k++;
        }
    }

    while(i<=m)
    {
        temp[k] = a[i];
        tr[k] = rl[i];
        tn[k] = n[i];
        i++;
        k++;
    }

    while(j<=r)
    {
        temp[k] = a[j];
        tr[k] = rl[j];
        tn[k] = n[j];
        j++;
        k++;
    }

    for(i=l;i<=r;i++)
    {
        a[i] = temp[i-l];
        rl[i] = tr[i-l];
        n[i] = tn[i-l];
    }
}

void mergeSort(int *a, int l,int r,int *rl, string *n)
{
    int mid;
    if(l<r)
    {
        mid = (l+r)/2;
        mergeSort(a,l,mid,rl,n);
        mergeSort(a,mid+1,r,rl,n);

        merge(a,l,r,mid,rl,n);
    }
}




void mergeS(int *a, int l,int r,int m,int *rl, string *n)
{
    int i, j, k, temp[r-l+1],tr[r-l+1];
    string tn[r-l+1];
    i = l;
    k=0;
    j = m+1;

    while(i<=m && j<=r)
    {
        if(a[i]<a[j])
        {
            temp[k] = a[i];
            tr[k] = rl[i];
            tn[k] = n[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            tr[k] = rl[j];
            tn[k] = n[j];
            j++;
            k++;
        }
    }

    while(i<=m)
    {
        temp[k] = a[i];
        tr[k] = rl[i];
        tn[k] = n[i];
        i++;
        k++;
    }

    while(j<=r)
    {
        temp[k] = a[j];
        tr[k] = rl[j];
        tn[k] = n[j];
        j++;
        k++;
    }

    for(i=l;i<=r;i++)
    {
        a[i] = temp[i-l];
        rl[i] = tr[i-l];
        n[i] = tn[i-l];
    }
}

void mergeSortS(int *a, int l,int r,int *rl, string *n)
{
    int mid;
    if(l<r)
    {
        mid = (l+r)/2;
        mergeSortS(a,l,mid,rl,n);
        mergeSortS(a,mid+1,r,rl,n);

        mergeS(a,l,r,mid,rl,n);
    }
}




int main()
{
    int n,i,j;
    cin>>n;
    int r[n],m[n],tr,tm;
    string na[n],tna;
    for(i=0;i<n;i++)
    {
        cin>>r[i]>>na[i]>>m[i];
    }

    mergeSort(m,0,n-1,r,na);

    for(i=0;i<n-1;i++)
    {
        if(m[i+1]==m[i])
        {
            mergeSortS(r,i,i+1,m,na);
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<r[i]<<" "<<na[i]<<" "<<m[i]<<"\n";
    }

    return 0;
}
