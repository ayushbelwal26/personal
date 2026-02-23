#include <iostream>
using namespace std;
double mini(double a , double b){
    if (a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    cout << mini(7,10);
}