#include <iostream>
using namespace std; 

// Fungsi untuk menghitung bilangan Fibonacci
int hitungFibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return (hitungFibonacci(n - 1) + hitungFibonacci(n - 2));
    }
}

int main() {
	int n,i,j = 0;
	cout << "input the n : "; cin>>n;
	cout<<"Fibonacci line : \n";
	for(i=1; i<=n; i++){
		cout<< "f_" << i << " : ";
		cout<< hitungFibonacci(j)<<endl;
		j++;
	}
	return 0;
}

