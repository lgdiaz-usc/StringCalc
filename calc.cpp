#include <iostream>
#include <string.h>

using namespace std;

int numConcat(int &i, int s, char* line){
    int sum = 0;
    while ((i <= s) && isdigit(line[i]))
    {
        sum *= 10;
        sum += (int)line[i] - (int)'0';
        i++;
    }
    return sum;
}

int main(int argc, char** argv){
    //Argument check
    if(argc != 2){
        cout << "Error: Not enough arguments" << endl;
        cout << "Usage: ./calc <equation>" << endl;
        return 0;
    }
    cout << strlen(argv[1]) << ": " << argv[1] << endl;

    int s = strlen(argv[1]);
    int i = 0;

    int num = numConcat(i,s,argv[1]);
    cout << argv[1] << " = " << num << endl;

    return 0;
}