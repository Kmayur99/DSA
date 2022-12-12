#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  
  //constructor
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};

void InsertAtHead(Node* &head,int data){
  Node* temp=new Node(data);
  temp->next=head;
  head=temp;
  
}

void print(Node* &head){
  Node* temp=head;
  while(temp!=NULL){
    cout << temp->data<<" ";
    temp=temp->next;
  }
  cout<< endl;
}


int main() {
  Node* node1=new Node(10);
  cout << node1->data;
  Node* head=node1;
  print(head);
  InsertAtHead(head, 12);
  print(head);
  
}