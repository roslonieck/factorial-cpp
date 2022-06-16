#include <iostream>
using namespace std; 

int factorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return factorial(n-1) * n;
    }
}

int main(){
    int n;
    cout << "A programme for calculating the factorial. Enter a number: " << endl; 
    cin >> n;
    cout << "The factorial of the number entered is: " << factorial(n);
    return 0;
}