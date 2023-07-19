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
void reverse(Node* &head,Node* cur){
    if(cur->next ==NULL){
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
void insert_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next= newNode;
    tail=tail->next;
}
bool isPaalindrome(Node* head) {

        Node* newHead = NULL;
        Node* newTail = NULL;
        Node* tmp = head;
        while(tmp != NULL){
            insert_tail(newHead,newTail,tmp->val);
            tmp=tmp->next;
        }
        reverse(newHead,newHead);
        
        tmp=head;
        Node* tmp2=newHead;
        while(tmp!= NULL){
            if(tmp->val !=tmp2->val){
                return false;
            }
            tmp=tmp->next;
            tmp2=tmp2->next;
        }
        return true;
}
bool isPalindrome(list<int>& myList) {
    list<int>::iterator front = myList.begin();
    list<int>::reverse_iterator back = myList.rbegin();

    while (front != myList.end() && back != myList.rend()) {
        if (*front != *back) {
            return false;
        }
        ++front;
        ++back;
    }

    return true;
}

int main(){
    list<int> myList;
     while(true){
        
        int element;
        cin >> element;
        if(element==-1){
            break;
        }
        myList.push_back(element);
    }

    bool palindrome=isPalindrome(myList);
    if(palindrome){
        cout<<"YES"<< endl;
    }
    else{
        cout << "NO" <<endl;
    }
    
    
    return 0;
}