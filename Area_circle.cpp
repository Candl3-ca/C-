#include <iostream>
using namespace std;
#include <cmath>

int main() {
    float r, area;

    std::cout<<"Please input the radius of the circle";
    cin>>r;

    area = M_PI* pow(r,2);

    std::cout<<"The area is: "<<area;

    return 0;
}
