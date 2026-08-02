#include<iostream>
using namespace std;

void fnc(int* &p){

    *p = NULL;

}

int main(){

int val = 40;
cout<<"Address of val: "<<&val<<endl;

int* ptr = &val;

fnc(ptr);
cout<<ptr<<endl;
cout<<"val: "<<val<<endl;


}