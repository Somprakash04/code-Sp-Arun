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
    ll.printList();
    return 0;
}