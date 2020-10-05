#include <iostream>
#include <vector>

using namespace std;

void display_menu() {
    cout << "\nP- Print numbers" << endl;
       cout << "A- Add a number" << endl;
       cout << "M- Display mean of number" << endl;
       cout << "S- Display the smallest number from the group" << endl;
       cout << "L- Display the largest number" << endl;
       cout << "F- press this to search a number in the collection" << endl;
       cout << "\nEnter your choice: ";
}

char get_selection(){
    char a;
    cin >> a;
    a = toupper(a);
    return a;
    
}

void handle_display(const vector<int> &v){
    if (v.size()==0) 
        cout << "NO, Elements to display" << endl;
    else  
    cout << "[ "; 
    for (auto c: v)
         cout << c << " ";
    cout << " ]";
        
        
}

void handle_add(vector<int> &v ){
    int number;
   cout << "Enter the number you want to add: ";
   cin >> number;
   v.push_back(number);
   cout << number << " is successfully added to the collection" << endl;
        
}

double handle_mean (const vector<int> &v){
    int sum{};
    for (auto c: v)
       sum = sum + c;
   return static_cast<double>(sum)/v.size();    
}
    
void handle_smallest (const vector<int> &v ){
    int smallest_number = v.at(0);
    for (auto c: v)
        if (c < smallest_number) {
            smallest_number = c;
        }
       else 
        smallest_number = v.at(0);
    cout << "The smallest number is " << smallest_number << endl;
    
}

void handle_largest (const vector<int> &v ) {
    
    
    int largest_number = v.at(0);
    for (auto c: v)
        if (c > largest_number) {
            largest_number = c;
        }
       else 
        largest_number = v.at(0);
    cout << "The largest number is " << largest_number << endl;
    
    
}

int handle_find (vector<int> &v ){
    if (v.size() == 0)
        cout << "There are no numbers to search among" << endl;
    else{
    int find{};
    cout << "Enter the number you want to find: ";
    cin >> find;
    for(auto c: v)
        if(find == c)
            cout << "The number is in the collection " << endl;
    }return 0;
}

void handle_quit() {
    
    cout << "GOODBYE, see you next time " << endl;
}

void handle_unknown(){
    
    cout << "You entered an invalid choice " << endl;
    
}

int main() {
    
    vector<int> numbers{};
    char selection;
    
    do {
        display_menu();
        selection = get_selection();
        
        switch(selection){
            case('P'):
            handle_display(numbers);
            break;
            case('A'):
            handle_add(numbers);
            break;
            case('M'):
            handle_mean(numbers);
            break;
            case('S'):
            handle_smallest(numbers);
            break;
            case('L'):
            handle_largest(numbers);
            break;
            case('F'):
            handle_find(numbers);
            break;
            case('Q'):
            handle_quit();
            break;
            default:
            handle_unknown();
        }
        
    }while (selection != 'Q');
    cout << endl;
    
    return 0;
}

    