#include<iostream>

using namespace std;

class Node{

    public:
        int val;
        Node *next;

        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

int main(){

Node *head = new Node(101);
Node *a = new Node(102);
Node *b = new Node(103);
Node *c = new Node(104);
Node *d = new Node(105);
Node *e = new Node(106);

     //address asign
        head->next = a;
        a->next = b;
        b->next=c;
        c->next=d;
        d->next=e;

     Node *tmp = head;
      while (tmp != NULL)
      {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
      }

    return 0;
}