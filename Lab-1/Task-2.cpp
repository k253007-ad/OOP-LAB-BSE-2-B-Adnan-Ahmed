#include <iostream>
using namespace std;

int main() {
    char char1 = 'A';
    int rows;
    cout << "Enter the Number of Rows: ";
    cin >> rows;
    
    for( int i = 0; i < rows; i++){
        for( int j = i+1; j < rows; j++){
            cout << " ";
        }
        for( int j = 0; j <= i*2; j++){
            char char2 = char1 + j;
            cout << char2;
        }
        cout << endl;
    }
    for( int i = (rows - 2); i >= 0; i--){
        
        for( int j = i+1; j < rows; j++){
            cout << " ";
        }
        for( int j = i*2; j >= 0; j--){
            char char2 = (char1 + i*2 - j);
            cout << char2;
        }
        
        cout << endl;
    }
    
    
    return 0;
}
