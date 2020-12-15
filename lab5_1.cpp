#include<iostream>
using namespace std;

int main(){
    int inputcase=1,evencount=0,oddcount=0;
    while(inputcase!=0)
    {
    cout << "Enter an integer: ";
    cin >> inputcase;
    if(inputcase==0)
    break;
    if(inputcase%2==0)
    {
        evencount++;
    }    
    else if(inputcase%2!=0)
    {
        oddcount++;
    }
    
    }
    cout << "#Even numbers = " <<evencount<<endl;
    cout << "#Odd numbers = " << oddcount;
    return 0;
    
}
