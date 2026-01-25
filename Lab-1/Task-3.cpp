#include <iostream>
using namespace std;

void findPrimesInRange(int num1, int num2){
    if ( num1 > num2 ){
        cout << "Enter Valid Numbers";
    }
    else {
        cout << "The Prime numbers between ";
        cout << num1 << " and " << num2 << " are:\n";
        for( int i = num1; i < num2; i++){
            bool prime = true;
            for( int j = ; j < i; j++){
                if( (i%j) == 0) prime = false;
            }
            if(prime == true) cout << i << " ";
        }
    }
}

int main() {
    
    int num1, num2;
    
    cout << "Enter First Number (must be smaller than second)"; 
    cout << endl;
    cin >> num1;
    cout << "Enter Second Number (must be larger than second)"; 
    cout << endl;
    cin >> num2;
    
    findPrimesInRange(num1, num2);
    
    return 0;
}
