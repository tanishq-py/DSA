#include<bits/stdc++.h>
using namespace std;

int main(){
     set<int> st;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
     }


     //log n complexity
     st.erase(st.begin());
     st.erase(5);

     //log n
     set<int> st= {1,2,3,4,5};
     auto it = st.find(4);
     
}
