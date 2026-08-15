#include <bits/stdc++.h>
#include<iostream>
#include<stack>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  

  
  
int main(){

    string st;cin>>st;

    stack<int> s;

    for (int i = 0; i < st.size(); i++)
    {
        int ch = st[i];
        if (ch>'0' && ch<='9')
        {
            s.push(ch-'0');
        }
        else{
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(ch=='+')s.push(a+b);
            else if(ch=='-')s.push(a-b);
            else if(ch=='*')s.push(a*b);
            else if(ch=='/')s.push(a/b);
        }
    }
    cout<<s.top()<<nl;

    

    return 0;
}