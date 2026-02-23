#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter: ";
    cin >> n ;
    for (int i = 1 ; i < n ; i++){
        if (i%5 == 0){
            continue;
        }
        else if(i%7 == 0){
            continue;
        }
        else{
            cout << i << endl ;
        }
    }
}