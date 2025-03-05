#include <iostream>
using namespace std; 


// FUNCTION TO CALCULATE FACTORIAL 
int hitungFaktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * hitungFaktorial(n - 1);
    }
}

int main() {
    int number;
    
    cout << "input number =  ";
    cin >> number;

    // Calls the hitungFaktorial function and prints the result
    int faktorial = hitungFaktorial(number);
    cout <<endl<< "Factorial of " << number << " is =  " << faktorial <<endl; 

    return 0;
}

