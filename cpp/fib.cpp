#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Till how many numbers max you want the series to run: ";
    cin >> N;
    int num1 = 0 ;
    int num2 = 1 ;
    cout << num1 << " ";
    cout << num2 << " ";
    int sum = 0; 
    while (sum < N){
        sum = num1 + num2;
        if (sum > N){
            break;
        }
        cout << sum << " ";
        num1 = num2;
        num2 = sum ;
    }

}