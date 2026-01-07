
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(8);
    vec.emplace_back(10);
    for (int val:vec){
        cout << val << " ";
    }
    cout << endl;
    // cout << vec.capacity() << endl;


    return 0;
}
