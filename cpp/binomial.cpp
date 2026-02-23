#include <iostream>
using namespace std;
// This is a wrong use of function.
// int bin(int n , int r){
//     int c = n - r;
//     int f1 = 1;
//     int f2 = 1;
//     int f3 = 1 ;
//     int val = 1;
//     for(int i = 1 ; i <= n ; i++){
//         f1 = f1*i;
//     }
//     for(int i = 1 ; i <= r ; i++){
//         f2 = f2*i;
//     }
//     for(int i = 1 ; i <= c ; i++){
//         f3 = f3*i;
//     }
//     val = f1/(f2*f3);
//     return val;
// }

// int main(){
//     cout << bin(7 , 3);
// }

// Right use

int fact(int n){
    int f = 1;
    for (int i = 1 ; i <= n ;i++){
        f = f*i;
    }
    return f;
}

int ncr(int n , int r){
    int f1 = fact(n);
    int f2 = fact(r);
    int f3 = fact(n-r);
    int coff = f1/(f2 * f3);
    return coff;
}

int main(){
    cout << ncr(7,5);
    return 0;

}