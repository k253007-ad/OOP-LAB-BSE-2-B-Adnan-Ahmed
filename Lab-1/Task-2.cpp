#include <iostream>
using namespace std;

int main() {
    char char1 = 'A';
    int rows;
    cout << "Enter the Number of Rows: ";
    cin >> rows;
    
    for( int i = 0; i < (rows*2)-1; i++){
        for( int j = i; j <= rows; j++){
            cout << " ";
        }
        for( int j = 0; j <= i*2; j++){
            cout << char1 + j;
        }
    }
    
    
    return 0;
}
