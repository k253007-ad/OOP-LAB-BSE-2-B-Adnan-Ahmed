#include <iostream>
using namespace std;

int main() {
    
    int num;
    
    cout << "Enter size of arrays: ";
    cin >> num;
    
    int arr1[num];
    int arr2[num];
    int arr3[num];
    int i, unique, uniques = num;
    
    cout << "Enter 5 elements of first array:" << endl;
    for(i = 0; i < num; i++)cin >> arr1[i];
    cout << "Enter 5 elements of second array:" << endl;
    for(i = 0; i < num; i++)cin >> arr2[i];
    
    for(i = 0; i < num; i++)arr3[i] = arr1[i];
    for(i = 0; i < num; i++)arr1[i] = arr2[i];
    for(i = 0; i < num; i++)arr2[i] = arr3[i];
    
    for(i = 0; i < num; i++)cout << arr1[i] << " ";
    cout << endl;
    for(i = 0; i < num; i++)cout << arr2[i] << " ";
    
    int large = 0, large2 = 0;
    for(i = 0; i < num; i++) if(large < arr1[i]) large = arr1[i];
    cout << "\nLargest Element in First Array (after swapping): ";
    cout << large;
    large = 0;
    for(i = 0; i < num; i++) if(large < arr2[i])large = arr2[i];
    for(i = 0; i < num; i++) if((large2 < arr2[i]) && (arr2[i] != large))large2 = arr2[i];

    cout << "\nSecond Large Element in Second Array (after swapping): ";
    cout << large2;
    
    for(i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if((j != i) && (arr1[i] != arr1[j])){
                unique = arr1[i];
            } else uniques--;
        }
    }
    
    cout << "\nUnique Element in First Array (after swapping): ";
    if(uniques == 0) cout << arr1[0];
    else cout << unique;
    
    return 0;
}
