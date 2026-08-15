#include<iostream>

using namespace std;

void insert_pos(int a[],int n ,int pos, int val){

    if(pos>n)return;
    for (int i = n-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1] = val;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void delete_pos(int a[],int n ,int pos){

    if(pos>n)return;
    for (int i = pos-1; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n,pos,val;cin>>n>>pos>>val;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // insert_pos(a,n,pos,val);
    // cout<<endl;
    // cout<<"After delete"<<endl;
    delete_pos(a,n,pos);






}