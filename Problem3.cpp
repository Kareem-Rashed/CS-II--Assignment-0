#include <iostream>
using namespace std;


class MyQueue{
    
private:
    int *arr;
    int size;
    int front_p;
    int rear_p;
    
public:
    MyQueue(int n){
        size = n;
        arr = new int[n];
        front_p = -1;
        rear_p = -1;
        
    }
    bool isEmpty(){
        if((front_p==rear_p) && (rear_p==-1))
            return true;
        else
            return false;
    };
    bool isFull(){
        
        return(rear_p==size-1);
        
    }

    
    void enqueue(int value);
    int dequeue();
    
    void print();
    
    int front(){
        if (isEmpty())
            return -1;
        else
            return *(arr+front_p);
        }
    int rear(){
        if (isEmpty())
            return -1;
        else
            return *(arr+rear_p);
        }
    
    void print_arr(){
        
        for(int i=0; i<size; i++)
            cout<<*(arr+i)<<" ";
        cout<<endl;
    }
    
    
};

void MyQueue :: enqueue(int value){
    
    if (isEmpty()){
        front_p = rear_p = 0;
        *(arr+rear_p)=value;
    }
    

    else
    {
        rear_p++;
        *(arr+rear_p)=value;
    }
    
}

int MyQueue::dequeue(){
    
    if (isEmpty())
        return -1;
    else
    {
        int new_front = front_p++;
        int element = *(arr+new_front);
        *(arr+new_front)=0;
        

        return element;
    }
}


void MyQueue::print(){
    
    for(int i = front_p; i<front_p+size; i++){
        
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
int main(){
    
    
    MyQueue q(5);
    
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.dequeue();
    q.enqueue(10);
    q.print();
    
    cout<<endl;
    
    q.print_arr();
    
    
    cout<<q.front()<<endl;
    cout<<q.rear()<<endl;
    
    
    
    return 0;
}

