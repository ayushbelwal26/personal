#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number of elements: ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i ++){
        cout << "Enter element: " ;
        cin >> arr[i];
    }

    for (int i = 0 ; i < n ; i ++){
        cout << arr[i] << " ";
    }

    for (int i = 0 ; i < n ; i ++){
        int k;
        for (k = 0 ; k < i ; k ++){
            if (arr[i] == arr[k]){
                break;
            }
        
        }

        if (k!= i){
            continue;
        }
        
        int x = 0 ;
        for (int j = 0 ; j < n ; j ++){
            if (arr[i] == arr[j]){
                x += 1;
                
            }
            
        }
        cout << endl << "The frequency of " << arr[i] << " " << "is" << x ;
    }
    
}