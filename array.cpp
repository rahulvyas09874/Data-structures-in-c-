#include <iostream>

using namespace std;


void insertion_function (int arr[], int n){
    int pos{0};
    int value{0};
    cout << "Enter the position at which you want to add an element: ";
    cin >> pos;
    cout << "Enter the value you want to add to that position: ";
    cin >> value;
    for (int i=n-1; i >= pos-1; --i)
        arr[i+1] = arr[i];
        
    arr[pos-1] = value; 

  cout << "New array is ";
    cout << "{ ";
    for (int i=0; i<n+1; ++i){
        cout << arr[i] << " ";
    }
    cout << " }";
       
}

void deletion_function (int arr[], int n){
    int pos{0};
    cout << "Enter the position of element you want to delete: ";
    cin >> pos;
    for (int i=pos-1; i<n; ++i){
        arr[i]=arr[i+1];
    }
    
    cout << "New array is : ";
    cout << "{ ";
    for (int i=0; i<n-1; ++i){
        cout << arr[i] << " ";
    }
    cout << " }";
}
void transverse_function (int arr[], int n){
    cout << "{ ";
    for (int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << " }"; 
}
void display_menu (){
    cout << "\n" << " T - transverse through the array " << endl;
    cout << " D - delete an element from a particular position " << endl;
    cout << " A - add an element to the array at particular position " << endl;
    cout << " Q - Quit the program " << endl;
    cout << " S - Search an element in the array " << endl;
    cout << " Please enter your choice " << endl;
}
int search_function (int arr[], int n){
    int value{0};
    cout << "Enter the element you want to search in the array: ";
    cin >> value;
     for(int i=0; i<n; ++i)
         if (arr[i]==value)
             return i;
         
    return -1;    
}
char get_selection () {
    char input {};
    cin >> input;
    input = toupper(input);
    return input;
}
int main() {
    int n{0};
    cout << "Enter how many elements you want to be in the array: ";
    cin >> n;

    int arr[n+5] ;
    for (int i=0; i<n; ++i){
        cout << "please enter "<< i << " element: ";
        cin >> arr[i];
    }
    
    char selection{};
    do {
        cout << endl;
        display_menu();
        selection = get_selection();
        
        switch (selection) {
            case ('T'):
            transverse_function(arr, n);
            break;
            case ('D'):
            deletion_function(arr, n);
            break;
            case ('A'):
            insertion_function(arr, n);
            break;
            case ('S'):
            {
             search_function(arr, n);
             int function_value{0};
             function_value = search_function(arr, n);
             if (function_value == -1){
                cout << "The element is not in the collection " << endl;
            }
             else
               cout << "The element is present at " << "index " << function_value  << endl;    
            }
             break;  
            case ('Q'):
            cout << " The program ended successfully " <<  endl;
            break;
            default:
            cout << "Please enter a valid choice!!!  " << endl;
            
            
            
        }
    }
    while (selection != 'Q');
    cout << endl;
    return 0;
}