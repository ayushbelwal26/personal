#include <iostream>
using namespace std;
void n_sum(){
    long long  n = 0 , sum = 0;
    cout << "Enter:";
    cin >> n;
    sum = (n*(n+1))/2 ;
    cout << sum;
}

int main(){
    n_sum();
    return 0;
}