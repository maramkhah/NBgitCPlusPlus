/************************************************
 * Author: Shayon Maramkhah 
 * Description: Problem 1, Project Euler 
 * https://projecteuler.net/problem=1
 *
 * Find the sum of all the multiples of 3 or 5 below 1000
 ************************************************/

#include <iostream>

int main() {
    const unsigned lastNumber = 1000;
    
    unsigned N = lastNumber/3;
    unsigned M = (lastNumber/5)-1;
    
    unsigned sum = (3)*(N*(N+1)/2) + (5)*(M*(M+1)/2);
    
    std::cout << sum;
}
