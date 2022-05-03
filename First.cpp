#include <iostream>
using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!" << std::endl;
/*
    int a,b,c;

    cout << "Enter 2 numbers";
    cin >> a >> b;
    c=a+b;
    cout << "The sum is " << c << endl;
*/
    string str;

    cout << "What's your name?";
//    This will only read 1 word.
//    cin >> str;

//  This will take an entire line as an input
    getline(cin,str);

    cout << "Hello " << str;

    return 0;
}
