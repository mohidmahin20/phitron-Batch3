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
    cout <<endl;
    cout <<"Your Linked-List: ";
    Node *tmp=head;
    while(tmp != NULL){
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;;
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
    print(head);
    
    
    return 0;
}