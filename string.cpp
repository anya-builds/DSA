#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout << "enter char array: ";
    cin.getline(str,100);
    cout << "output: "<< str<<endl;
    return 0;
}