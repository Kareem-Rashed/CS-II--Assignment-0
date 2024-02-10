#include <iostream>
using namespace std;


bool _isOpposite(char a, char b) {
    if ((a == ']') && (b =='['))
        return true;
    else if ((a == ')') && (b =='('))
        return true;
    else if ((a == '}') && (b =='{'))
        return true;
    else if ((a == '[') && (b ==']'))
        return true;
    else if ((a == '(') && (b ==')'))
        return true;
    else if ((a == '{') && (b =='}'))
        return true;
    else
        return false;
}


bool isValid(string s)
{

    
    class Stack{
    private:
        int size;
        char *arr;
        
    public:
        int elements;
        Stack(int n){
            size = n;
            elements = 0;
            arr = new char[n];
        }
        bool isFull(){
            return (elements==size);
        }
        bool isEmpty(){
            return(elements==0);
        }
        void push(char c){
            
            if(isFull())
                cout<<"Error; Stack is Full"<<endl;
            else
            {
                *(arr+elements)=c;
                elements++;
            }
            
        }
        char pop(){
            
            elements--;
            return arr[elements];
        }
        char touch(){
            return arr[elements-1];
        }

        };
    Stack stack(s.length());
    
    for(int i = 0; i<s.length(); i++)
        stack.push(s[i]);
    
    for (int i = 0; i < s.length(); i++) {
            char pop1 = stack.pop();
            char pop2 = stack.touch();
        if((_isOpposite(pop1, pop2)))
            break;
        stack.pop();

        if (!(_isOpposite(pop1, s[i]))&&(!(_isOpposite(pop1, pop2)))){
            cout<<pop1<<" is not the opposite of "<<s[i]<<" neither the opposite of "<<pop2<<endl;
            return false;

        }
        stack.push(pop2);
        }

        return true;
        

    };
    
    

// {()}[]
// (()[])

int main(){
    

    cout<<isValid("()[]{}")<<endl;
    
    
    return 0;
    
}

