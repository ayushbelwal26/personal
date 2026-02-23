#include <iostream>
using namespace std;
int main(){
    int num , i = 1 , sum = 0;
    cout << "Enter number: " ;
    cin >> num;
    while (i <= num){
        sum = sum + i;
        i++;
    }
    cout << "The sum is: " << sum;
    return 0;
}