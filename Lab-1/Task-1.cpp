#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number : ";
    cin  >> num;
    
    cout << "Number = " << num << endl;
    
    int notes[6] = {5000, 500, 100, 20, 5, 1};
    int times[6];
    
    for( int i = 0; i < 6; i++){
        int times1 = 0;
        while(notes[i] <= num){
            num -= notes[i];
            times1++;
        }
        times[i] = times1;
    }
    
    for( int i = 0; i < 6; i++){
        cout << notes[i] << " x " << times[i] << endl;
    }
    
    return 0;
}
