#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    } 
};
void insert_at_tail(Node *&head,int v){
    Node *newNode = new Node(v);
    if(head ==NULL){
        head=newNode;
        return;
    }
    Node *tmp= head;
    while(tmp->next !=NULL){
        tmp= tmp->next;
    }
    //ekhon amra next node e 
    tmp->next= newNode;
}
void print( Node * head){
    cout <<"Your Linked-List: ";
    Node *tmp=head;
    while(tmp != NULL){
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main(){
    Node *head =NULL;
   while(true){
     cout<<"Option-1: Insert a tail: "<<endl;
     cout<<"Option-2: Print Linked List"<<endl;
     cout<<"Option-3: Terminate: " <<endl;
     cout<< "option: ";
    int op;cin>>op;
    if(op==1){
        cout<< "Enter Value: ";
        int v;cin>>v;
        insert_at_tail(head,v);

    }
    else if(op==2){
       print(head);
    }
    else if(op==3){
        break;
    }
    
   }
    
    
    return 0;
}