#include <iostream>
#include <vector>
#include <utility>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    stack<int> s2;
    s2.swap(s);
    cout << " s size: " << s.size() << endl;
    cout << " s size: " << s2.size() << endl;
    

    return 0;
}