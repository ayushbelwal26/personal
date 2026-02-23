#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter: ";
    cin >> n ;
    int arr[n];
    int mx = arr[0];
    for (int i = 0 ; i < n ; i++){
        cout<<"Enter elemnt : " ;
        cin >> arr[i];
        if (mx < arr[i]){
            mx = arr[i];
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
    cout << "Max element: "<< mx ;
}