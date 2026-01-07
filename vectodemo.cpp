
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
    vec.pop_back();
    for (int val:vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "val at idx" << vec[2] << "or " << vec.at(2) << endl;
    // cout << vec.capacity() << endl;


    return 0;
}
