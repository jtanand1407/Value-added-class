#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> hsh;
    for (ll i = 1; i <= n; i++)
    {
        vector<ll> temp;
        for (ll j = 0; j < i; j++)
        {
            temp.push_back(j);
        }
        hsh.push_back(temp);
    }
    for(auto it: hsh)
        {
            for(auto it2:it)
            cout<<it2<<" ";
            cout<<endl;
        }
}