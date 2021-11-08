#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> vec;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        for(auto it: st)
        vec.push_back(it);
       sort(vec.begin(),vec.end());

           if(vec.size()>1)
           {
           int f=vec[0];
           int fs=vec[1];
           int k=abs(f-fs);

           cout<<k<<"\n";
           }
           else
           cout<<-1<<"\n";

      
    }
}