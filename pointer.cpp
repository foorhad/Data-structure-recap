#include<iostream>
using namespace std;

void fnc(int* &p){

    cout<<p<<endl;

}

int main(){

int val = 40;
cout<<"Address of val: "<<&val<<endl;

int* ptr = &val;

fnc(ptr);

cout<<"val: "<<val<<endl;


}