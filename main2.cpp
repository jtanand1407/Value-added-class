#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// N Queen Problem->

bool safe(int n,int row,int col,vector<vector<int>> &ans,int farr[],int sarr[],int tarr[])
{
  if(farr[row]==1)
  return false;
  if(sarr[row+col]==1)
  return false;
  if(tarr[(n-1)+row-col]==1)
  return false;
  return true;
}

bool nqueen(int n,int col,vector<vector<int>> &ans,int farr[],int sarr[],int tarr[])
{
  if(col==n)
  {
  for(auto it: ans)
  {
    for(auto it2:it)
    cout<<it2<<" ";
    cout<<endl;
  }
  return true;
  }
  
  for(int row=0;row<n;row++)
  {
    if(safe(n,row,col,ans,farr,sarr,tarr))
    {
      ans[row][col]=1;
      farr[row]=1;
      sarr[row+col]=1;
      tarr[(n-1)+row-col]=1;
       if(nqueen(n,col+1,ans,farr,sarr,tarr)==true)
       return true;
      ans[row][col]=0;
      farr[row]=0;
      sarr[row+col]=0;
      tarr[(n-1)+row-col]=0; 
    }
  }
  return false;
    
}

int main()
{
  int n;
  cin>>n;
  vector<vector<int>> ans(n,vector<int> (n,0));
  int farr[n]={0};
  int sarr[2*n-1]={0};
  int tarr[2*n-1]={0};

  bool check=nqueen(n,0,ans,farr,sarr,tarr);
  if(check!=true)
  cout<<-1<<endl;
return 0;
}