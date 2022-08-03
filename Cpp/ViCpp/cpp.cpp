#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define REP(n) for (int i=0; i<n; i++)
#define INF 1e9




ll getHP(ll n);
ll power(ll u, ll v);
ll sumChiff(ll n);
int* revArr(int arr[], int l);
string tolow(string s);




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    freopen("input.txt", "r", stdin);
	
    freopen("output.txt", "w", stdout);
	return 0;
}








ll mul(ll u , ll v)
{
    return u*v;
}






ll power(ll u, ll v)
{
    if(u==0)
        return 0;
    ll ans=1;
    ll acc=u;
    while(v)
	{
        if(v%2)
		{
            ans=mul(ans,acc);
        }
        acc = mul(acc,acc);
        v/=2;
    }
    return ans;
}


ll getHP(ll n)
{
	ll i=1;
	while (1)
	{
		if (!(n / power(10, i)))
			return i-1; // n==0 if i++ --> i--
		i++;
	}
}



ll sumChiff(ll n)
{
	ll s = 0;
	while (1)
	{
		if (!n){return s;}
		s += n%10;
		n /= 10;
	}
}






int* revArr(int arr[], int l)
{
    int* tab = (int *) malloc(sizeof(int)*l);
    for (int i=0; i<l; i++)
    {
        tab[i]=arr[l-1-i];
    }
    return tab;
}



string tolow(string s){
    string ls = "";
    const int l = s.length();
    for (int i=0; i<l; i++){
        ls += tolower(s[i]);
    }
    return ls;
}