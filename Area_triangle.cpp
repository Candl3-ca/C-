#include <iostream>
using namespace std;

int main() {
//    initialize the variables

    float a,b,c;

//    taking the input

    std::cout<<"\nWelcome to area of a triangle calculator";

    std::cout<<"\nPlease input the height of the triangle";
    cin>>a;

    std::cout<<"\nPlease input the width of the triangle";
    cin>>b;

//    processing the data

    c = (a*b)/2;

//    printing the results

    std::cout<<"\nThe area of the triangle is" << c << endl;

    return 0;
}
