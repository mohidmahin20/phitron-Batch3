#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList ={1,2,3,4,5,6};
    // list<int> newList={10,20,30};
    // vector<int> v={60,70,80};
    // myList.push_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(),3),100);
    // myList.erase(next(myList.begin(),3));
    // myList.insert(next(myList.begin(),3),v.begin(),v.end());
    // myList.erase(next(myList.begin(),3),v.begin(),v.end(),5);
    //replace(myList.begin(),myList.end(),30,100);
    // for(int val: myList){
    //     cout <<val << endl;
    // }
    auto it=find(myList.begin(),myList.end(),40);
    if(it==myList.end()){
        cout << "Not found"<<endl;
    }
    else{
        cout << "found" <<endl;
    }

    return 0;
}