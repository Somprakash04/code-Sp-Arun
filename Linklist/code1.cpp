#include<iostream>
#include<List>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head=tail=NULL;
        }
        void push_back(int val){
            Node* newNode= new Node(val);
            if(head == NULL){
                head=tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
        }
        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head=tail=newNode;
            }
            else{
            newNode->next=head;
            head=newNode;
            }
        }
        void pop_front(){
            if(head==NULL){
                cout<<"List is empty!"<<endl;
                return;
            }
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        void pop_back(){
            if(head==NULL){
                cout<<"List is empty!"<<endl;
                return;
            }
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete temp;
        }
        void insert_pos(int val,int pos){
                  if(pos<0){
                    cout<<"Invalid position\n";
                    return;
                  }
                  if(pos==0){
                    push_front(val);
                    return;
                  }
                  Node* temp=head;
                  for(int i=0;i<pos-1;i++){
                    if(temp==NULL){
                      cout<<"Invalid position\n";
                      return;
                    }
                    temp=temp->next;
                  }
                  Node* newNode=new Node(val);
                  newNode->next=temp->next;
                  temp->next=newNode;
                }
        void printList(){
        Node* temp=head;
        if(head == NULL){
            cout<<"List is empty!"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        }
        
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.pop_front();
    ll.pop_back();
    ll.insert_pos(5,2);
    ll.printList();
    return 0;
}