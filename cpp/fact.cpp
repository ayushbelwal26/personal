#include <iostream>
using namespace std;
// void fact(){
//     long long n  , f = 1;
//     cout << "Enter: ";
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         f = f*i;
//     }
//     cout << f;
// }
// int main(){
//     fact();
//     return 0;
// }
long long fact(long long n){
    long long f = 1;
    for (int i = 1 ; i <= n ; i++){
        f = f*i;
    }
    return f;
}

int main(){
    cout << fact(5);
}