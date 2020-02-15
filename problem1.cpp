
/************************************************
 * Author: Shayon Maramkhah 
 * Description: Project Euler
 * 
 *              Multiples of 3 and 5 
 *              Problem 1, if we list all the natural numbers below 
 *              10 that are multiples of 3 or 5,we get 3, 5, 6 and 9. 
 *              The sum of these multiples is 23. Find the sum of all 
 *              the multiples of 3 or 5 below 1000. 
 *
 ************************************************/

#include<iostream>
using std::cout; //Using Declaration 

int main() {
  
    unsigned sum = 0;
    unsigned number = 1000;
    
    unsigned N = number/3;
    unsigned M = (number/5)-1;
    
    sum = (3)*(N*(N+1)/2) + (5)*(M*(M+1)/2);
    
    cout<<sum;
    
    
    return 0;
}
