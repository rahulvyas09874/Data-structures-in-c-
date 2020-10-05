#include <iostream>
using namespace std;
int greatest_number_finder(int arr[]){
    
    
   for(int i = 0;i < 4; ++i)
    {
      
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
int num = arr[0];
return num;
}




int main() {
    int arr[4];
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
       
    cout << greatest_number_finder(arr);
    
    
    return 0;
}