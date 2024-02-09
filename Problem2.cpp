#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    
    ifstream input1, input2;
    ofstream output;
    
    input1.open("File1.txt");
    input2.open("File2.txt");
    
    output.open("Output.txt");
    
    for(int i = 0; i<6; i++)
    {
        int x1, x2;
        
        input1>>x1;
        input2>>x2;
        if(x1>x2)
            output<<x2<<" "<<x1<<" ";
        else
            output<<x1<<" "<<x2<<' ';
        
    }
    
    return 0;
}


//need to add is empty func and error opening func

