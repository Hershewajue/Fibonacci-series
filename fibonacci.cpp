// Main function of the C++ program.

#include <iostream>
using namespace std;

int main()
{
    // Write a program that calculates and displays the first 10 elements of the Fibonacci series.
    //The Fibonacci series is defined as follows:
    //u1= 1, u2=1 and un=un-1+un-2

    int userInput, term1, term2, nextTerm = 0;
    cout << "Please input the nth term\n";
    cin >> userInput;
    cout << "Please input 0 as the first term, and 1 as the second term if you want the series to start from 0, \nelse input any other number of your choice after the prompt\n";
    cout << "Please input the first term\n";
    cin >> term1;
    cout << "Please input the second term\n";
    cin >> term2;
    
    
    cout << "The fist " << userInput <<" elements of this Fibonacci series are:\n";
    
    for(int i = 1; i <= userInput; ++i){
       if(i == 1){
            cout << term1 << ", ";
            continue;
       }
       else
           if(i == 2){
                cout << term2 << ", ";
                continue;
           }
           else
                nextTerm = term1 + term2;
                term1 = term2;
                term2 =  nextTerm;
       
       cout << nextTerm;
       
        if( i < userInput )
           cout << ", ";
        
    }
    cout << "\nEnd of program!!!";
}

