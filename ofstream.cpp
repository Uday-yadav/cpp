#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    string s1="hello";
    string s2="How are you";
    
    ofstream obj("one.txt");
    obj<<s1;
    obj<<s2;
    obj.close();
    return 0;
}
