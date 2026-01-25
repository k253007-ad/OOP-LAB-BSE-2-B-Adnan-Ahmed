#include <iostream>
using namespace std;

int main() {
    
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;
    
    int m1[r1][c1] = {
                    {1, 2, 3},
                    {4, 5, 6},
                };
    int m2[r2][c2] = {
                    {7, 8},
                    {9, 10},
                    {11, 12},
                };
    int r[2][2] = {0};
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                r[i][j] += (m1[i][k] * m2[k][j]);
            }
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
