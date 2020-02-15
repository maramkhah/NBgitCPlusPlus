/************************************************
 * Author: Shayon Maramkhah 
 * Description: Project Euler
 * 
 *              Fibonacci sequence whose values 
 *              do not exceed four million, find 
 *              the sum of the even-valued terms.  
 *
 ************************************************/

#include<iostream>
using std::cout; //Using Declaration 

int main() {
  
    unsigned first = 1;
    unsigned second = 2;
    unsigned sum = 0;
    unsigned next = 0;
    
    do
    {
     next = first + second;
     first = second;
     second = next;
     
     if(next%2==0)
     sum+= next;
        
    }while(next<4000000);
    
    cout<<sum+2;
    
    return 0;
}



