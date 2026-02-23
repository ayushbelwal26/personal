#include <iostream>
using namespace std;
int sum_dig(int n){
    int sum = 0;
    while (n > 0){
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}
int main(){
    cout << sum_dig(2325);
}