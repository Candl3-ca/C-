#include <iostream>
using namespace std;

int main() {
//    initializing the variable
    int n;

//    taking the input
    std::cout<<"Enter the natural number (finding the sum of first n Natural numbers)";
         cin >> n;

//    initializing the variable
    int sum;

//    calculation
    sum = (n*(n+1))/2;

//    printing the output
    std::cout<<"\nThe sum is: " << sum << endl;

    return 0;
}
