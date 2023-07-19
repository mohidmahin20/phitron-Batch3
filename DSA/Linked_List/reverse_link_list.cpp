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
void print_reverse( Node * n){
    if(n==NULL) {
        return;
    }
    print_reverse(n->next);
    cout<<n->val<<" ";
}
void print( Node * n){
    if(n==NULL) {
        return;
    }
     cout<<n->val<<" ";
    print(n->next);
   
}
int main(){
    int v;
    Node* head = NULL;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,v);
    }
    print_reverse(head);
    cout <<endl;
    print(head);
    
    
    return 0;
}