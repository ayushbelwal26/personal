#include <iostream>
using namespace std;

void fibonacciTillN(int N) {
    int num1 = 0;
    int num2 = 1;

    cout << num1 << " " << num2 << " ";

    int sum = 0;
    while (sum < N) {
        sum = num1 + num2;
        if (sum > N){
            break;
        } 
        cout << sum << " ";
        num1 = num2;
        num2 = sum;
    }
}

int main() {
    int N;
    cout << "Till where max you want the fibonacci series: ";
    cin >> N;
    fibonacciTillN(N);
    return 0;
}
