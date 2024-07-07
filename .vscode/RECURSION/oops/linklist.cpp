#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node*next;

    node(int data ){
        this->data = data;
        this->next= NULL;
        
    }

};

void inserthead(node* &head , int data ){
    node *temp = new node(data );
    temp->next= head;
    head = temp;

}
void print(node* &head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}
int main(){
    node*n = new node(10);
    // cout<<n->data<<endl;
    // cout<<n->next;

    node*head=n;
    print(head);

    inserthead(head,12);
    print(head);
    return 0;

}