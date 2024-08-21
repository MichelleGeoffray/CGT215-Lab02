
#include <iostream>
using namespace std;
int main()
{
    float A;
    float B;
    float X;
    cout << "Hello, my name is Mia and I'm going to solve the equation: \nAx + B = 0\nFor x\n\nPlease enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;
    cout << endl;

    X = (0 - B) / A;

    cout << "Solving " << A;
    cout << "x+" << B;
    cout << "=0 for x...\n" << endl;


    cout << "The answer is:\nx=" << X << endl;
}