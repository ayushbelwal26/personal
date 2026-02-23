#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n ;
    int count = 0 ;
    while (temp>0){
        count = count + 1 ;
        temp = temp/10;
    }
    

    int sum = 0 ;
    temp = n ;
    int value = 0;
    while (temp > 0){
        value = temp%10;
        sum  = sum + pow(value,count) ;
        temp = temp / 10;
    }
    if (sum == n){
        cout<<"Yes";
    }
    else{
        cout << "No";
    }

}
