#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> arr;
    // cout<<arr.size()<<endl;
    // arr.push_back(0);
    // arr.push_back(2);
    // arr.push_back(3);
    // cout<<arr.size()<<endl;
    // arr.pop_back();
    // cout<<arr.size()<<endl;
    // arr.clear();
    // cout<<arr.size()<<endl;

    
    //copy entire vector in other
    // vector<int> vec1(4,0);
    // vector<int> vec2(4,10);


    // vector<int> vec3(vec2.begin(), vec2.end()); //[)
    // vector<int> vec3(vec2);
    

    // //
    // vector<int> anushka;
    // anushka.push_back(1);   //emplace_back() takes less time than push_back()
    // anushka.push_back(2);
    // anushka.push_back(3);
    // anushka.push_back(4);
    // vector<int> tanishq(anushka);
    

    //2d vector
    vector<vector<int>> vec;

    vector<int> anushka1;
    vector<int> anushka2;
    vector<int> anushka3;

    vec.push_back(anushka1);
    vec.push_back(anushka2);
    vec.push_back(anushka3);

    // for(int i=0; i<3000; i++){
    //     cout<<"loveYou"<<" ";
    // }

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            cout<<vec[i][j]<< endl;
        }
    }

}
