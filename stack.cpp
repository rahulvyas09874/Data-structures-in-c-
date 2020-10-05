#include <iostream>
#include <string>
using namespace std;

class stack{

private:
    
    int top;
    int arr[10];
    
public:
    stack(){
        top = -1;
        for (int i{0}; i<10;++i)
            arr [i] =0;
    }
    
    bool isempty(){
        if (top == -1){
            return true;
        }
        else {
          return false;    
        }
    }
    bool isfull(){
        if (top == 9){
            return true;
        } 
        else{
           return false;    
        }
    }
    void push (int val){
        if(isfull()){
            cout << " STACK OVERFLOW " << endl;
        }else{
          top++;
          arr[top] = val;  
        }
          
    }
    int pop (){
        if (isempty()){
            cout << " STACK UNDERFLOW " << endl;
            return 0;
        }
        
        else{
            int value = arr[top];
            arr[top] = 0;
            top--;
            return value;
        }   
    }
    int peek(int index){
        if(isempty()){
            cout << " STACK UNDERFLOW - can't find the required index in the stack " << endl;
            return 0;
       }    
        
        else{
          int int1=arr[index];
          return int1;
        }
    
    }
    int count(){
        
        return top+1;
    }
    void change (int val, int index){
        arr[index] = val;
        cout << " The input index value is successfully changed to: " << val << endl;
    }
    void display (){
    for (int i{9}; i>=0; --i)
        cout << arr[i] << " ";
    }
    
};

int main() {
    stack s;
    int option,in;
    
    do{ cout << "See the menu below and select an appropriate option " << endl;
        cout << "1- TO CHECK WETHER THE STACK IS EMPTY OR NOT " << endl;
        cout << "2- TO CHECK WETHER THE STACK IS FULL OR NOT " << endl;
        cout << "3- TO PUSH AN ELEMENT IN THE STACK " << endl;
        cout << "4- TO POP AN ELEMENT OUT OF THE STACK " << endl;
        cout << "5- TO PEEK THROUGH THE STACK " << endl;
        cout << "6- TO COUNT NO. OF ELEMENTS IN THE STACK " << endl;
        cout << "7- TO CHANGE AN ELEMENT OF STACK AT AN PARTICULAR POSITION " << endl;
        cout << "8- DISPLAY ALL THE ELEMENTS IN THE STACK " << endl;
        cout << "9- TO QUIT THE PROGRAM " << endl;
        cin >> option;
      
        switch(option){
            case 1:
              s.isempty();
              break;
            case 2:
              s.isfull();
              break;
            case 3:
             int val;
             cout << "Enter the value you want to push in the stack: ";
             cin >> val;
             s.push(val);
             break;
            case 4:
               s.pop();
               break;
            case 5:
              cout << "please enter the index at which you want to peek in the stack: ";
              cin >> in;
              s.peek(in);
              break;
            case 6:
             s.count();
             break;
            case 7:
              int value,index;
              cout << "Enter the value and position: ";
              cin >> value >> index;
              s.change(value,index);
              break;
            case 8:
             s.display();
             break;
            case 9:
             cout << "BYE BYE!!! SEE YOU AGAIN " << endl;
            default:
             cout << "Please enter an valid selection " << endl;
              
            
        }
        
        
        
        
    }while (option != 9);
    
    return 0;
}
    