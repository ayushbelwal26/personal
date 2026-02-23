// #include<iostream>
// using namespace std;
// void printName();
// int main(){
// cout << "Hello World";
// printName();
// return 0;
// }
// void printName(){
// cout << " Hi";
// }

// #include<iostream>
// using namespace std;
// int sum(){
//     int a , b;
// cout << "Enter two numbers: ";
// cin >> a >> b;
// return a+b;
// }
// int main(){
//     int result = sum();
//     cout << "sum = "<<result;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void sum(int , int);
// int main(){
//     int a , b;
// cout << "Going to calculate the sum of two numbers: ";
// cout << "Enter two numbers: ";
// cin >> a >> b; 
// sum(a,b);
// return 0;
// }
// void sum(int a , int b){
//     cout << "the sum is "<< a+b;
// }

#include <iostream>
using namespace std;
int sum(int , int);
int main(){
    int a , b ,  result;
    cout << "Going to calculate sum of two numbers: ";
    cout << "Enter two numbers: ";
    cin >> a >> b;
    result = sum (a,b);
    cout << "The sum is: "<< result;
    return 0;
}

int sum(int a , int b ){
    return a+b ;
}

// #include <iostream>
// using namespace std;
// void swap(int a , int b{
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }