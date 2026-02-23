#include <iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int a[r][c];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> a[i][j];

    int max = a[0][0], min = a[0][0];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j];
        }

    cout << "Largest = " << max << endl;
    cout << "Smallest = " << min << endl;
}
