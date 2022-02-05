#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    string s1;
    
    ifstream obj("one.txt");
    // obj>>s1;
    
    while(obj.eof()==0)
    {
    getline(obj,s1);
    std::cout << s1 << std::endl;
    }
    obj.close();
    return 0;
}
