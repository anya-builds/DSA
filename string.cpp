#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[12];
    cout << "enter char array: ";
    cin.getline(str,10);
    for (char ch:str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}