#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[]){ 
    if(argc<=1){
        cout << "Please input numbers to find average.\n";
        
        return 0;
    }
    
    int sum=0;
    for(int i=1; i<argc; i++){
        sum += atoi(argv[i]);
    }
    cout << "---------------------------------" << endl;
    int avg = sum / (argc-1);
    cout << "Average of " << argc-1 << " numbers = " << avg << endl;
    cout << "---------------------------------" << endl;
    
    return 0;
}
