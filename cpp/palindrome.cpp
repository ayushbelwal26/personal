#include <iostream>
using namespace std;
int main(){
    int n , temp;
    cout << "Enter number: ";
    cin >> n ;
    temp = n;
    int rev = 0;
    if (n < 0){
        cout << "Its not palindrome";
    }
    while (temp>0){
        rev = rev*10+temp%10;
        temp = temp / 10 ;
    }
    if (rev == n){
        cout << "Its an palindrome number";
    }
    else{
        cout<< "Its not palindrome";
    }
    return 0;
}