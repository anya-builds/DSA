#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    vector<pair<int, int>> vec={{1,2},{2,3},{4,5}};
    vec.push_back({6,7});
    vec.emplace_back(8,0);
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;

    }
    return 0;
}