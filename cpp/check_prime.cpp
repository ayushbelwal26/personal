#include <iostream>
#include <cmath>
using namespace std;
int check_prime(int n){
    for(int i = 2 ; i <= sqrt(n);i++){
        if (i%n == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    if (check_prime(5)){
        cout << "Its prime";
    }
    else{
        cout << "Not Prime";
    }
}