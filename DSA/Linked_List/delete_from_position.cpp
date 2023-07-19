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
            cout <<endl<< "Inserted at head"<<endl<<endl;

        return;
    }
    Node *tmp= head;
    while(tmp->next !=NULL){
        tmp= tmp->next;
    }
    //ekhon amra next node e 
    tmp->next= newNode;
    cout <<endl<< "Inserted at tail"<<endl<<endl;
}
void insert_at_position(Node* head,int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<pos-1;i++){
        tmp=tmp->next;

    }
    newNode->next= tmp->next;
    tmp->next=newNode;
    cout<<endl<< "Inserted at position" <<" "<<pos<<endl;
}
void insert_at_head(Node* &head, int v){
    Node* newNode=  new Node(v);
    newNode->next=head;
    head=newNode;
    cout <<"Inserted at head" << endl<<endl;

}
void delete_from_position(Node* head,int pos){
    Node* tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp= tmp->next;
    }
    Node* deleteNode =tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout <<"Node Deleted from position "<<pos<<endl;

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
    Node *head =NULL;
   while(true){
     cout<<"Option-1: Insert a tail: "<<endl;
     cout<<"Option-2: Print Linked List"<<endl;
     cout<<"Option-3: Insert at any position"<<endl;
     cout<<"Option-4: Insert at head"<<endl;
     cout<<"Option-5: Delete from position"<<endl;
     cout<<"Option-6: Terminate: " <<endl;
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
        int pos,v;
        cout <<"Enter a position :";
        cin>> pos;
        
        cout << "Enter a value: ";
        cin >>v;
        if(pos==0){
            insert_at_head(head,v);
        }
        else{
            insert_at_position(head,pos,v);

        }
        

    }
    else if(op==4){
         int v;
         cout << "Enter Value";
         cin>> v;
         insert_at_head(head,v);
    }
    else if(op==5){
        int pos;
        cout << "Enter Position: ";
        cin >> pos;
        delete_from_position(head,pos);
    }
    else if(op==6){
        break;
    }
    
   }
    
    
    return 0;
}