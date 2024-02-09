#include <iostream>
#include <fstream>
#include <string>
using namespace std;




int main(){
    
    int max = 0;
    int location;
    ifstream input_file;
    ofstream output_file;
    
    input_file.open("input1.txt");
    output_file.open("Output.txt");
    
    
    for(int i=0; i<4; i++)
    {
        string x;
        getline(input_file, x);
        if(x.length()>max)
        {
            max = x.length();
            location = i;
        }
    }

    
    input_file.close();
    output_file.close();
    
    input_file.open("input1.txt");
    output_file.open("Output.txt");
    for(int i=0; i<4; i++)
    {
        string x;
        
        getline(input_file, x);
        
        if (i == location){
            output_file<<x<<" (SELECTED)"<<endl;
            output_file<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _ _ __ _"<<endl;
        }
        else
        {
            output_file<<x<<endl;
        }
            
    }
    
    input_file.close();
    output_file.close();
    



    
    
    
    
    return 0;
}
