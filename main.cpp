#include <iostream>
#include <fstream>
#include <string>
using namespace std;




int main(){
    
    int max = 0;
    int location;
    string x;
    ifstream input_file;
    ofstream output_file;
    
    input_file.open("input1.txt");
    output_file.open("Output.txt");
    
    
    for(int i=0; i<4; i++)
    {
        input_file>>x;
        
        if(x.length()>max)
        {
            max = x.length();
            location = i;
        }
    }
    for(int i=0; i<4; i++)
    {
        input_file>>x;
        
        if (i == location){
            output_file<<x;
            cout<<x;
            output_file<<"______________________";
            cout<<"______________________";
        }
        else
        {
            output_file<<x;
            cout<<x;
        }
            
    }
    
    
    
    
    
    
    return 0;
}
