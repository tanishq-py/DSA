//bitset -> 1 bit
#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt; //it only store 1 or 0;
    cin>>bt;

    //all
    cout<<bt.all()<<endl; //print true if all set
    //any
    cout<<bt.any()<<endl; //print true if any bit is set
    // count
    cout<<bt.count()<<endl; //print no of set bit
    // flip
    cout<<bt.flip(2)<<endl; //set or unset at position 2 
    // none
    cout<<bt.none()<<endl; //print true if none is set
    // set
    cout<<bt.set(2)<<endl; //set 2nd position
    cout<<bt.set(2,0)<<endl; //set 2nd position to 0
    // reset 
    cout<<bt.reset(2)<<endl; //unset 2nd position
    cout<<bt.reset()<<endl; //unset all position to 0
    // size 
    cout<<bt.size()<<endl; //print size
    // test 
    cout<<bt.test(1)<<endl; //check if bit is set or unset at index 1

}
