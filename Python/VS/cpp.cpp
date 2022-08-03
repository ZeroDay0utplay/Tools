#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(n) for (int i=0; i<n; i++)




void revArr(int arr[], int l);



int main()
{
    
    return 0;
}
















void revArr(int arr[], int l)
{
    int tab[l];
    for (int i=0; i<l; i++)
    {
        tab[i]=arr[i];
    }
    for (int i=0; i<l; i++)
    {
        arr[i]=tab[l-1-i];
    }
}
