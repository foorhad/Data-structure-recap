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

void insert_head(Node *&head, int val){

    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, int val){

    Node *newNode = new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;
    
}

void insert_any_pos(Node *&head,int pos, int val){

    Node *newNode = new Node(val);

    int sz=0;
    Node *tmp = head;
    while (tmp!=NULL)
    {
        sz++;
        tmp=tmp->next;
    }

    if (pos > sz)return;
    
    Node *tmp1 = head;
    for (int i = 1; i < pos-1 ; i++)
    {
       tmp1 = tmp1->next;
    }
    
    newNode->next = tmp1->next;
    tmp1->next = newNode;
}

void print_linked_list(Node *head){

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main(){

    Node *head = NULL;
    insert_head(head,33);
    insert_head(head,3);
    insert_head(head,330);
    insert_tail(head,505);
    insert_any_pos(head,3,899);
    print_linked_list(head);
   

}