/*
 Program Name : Swapping of Two Numbers using Reference Variables
 Description  : Demonstrates call by reference in C++ using C++
                reference variables to swap two numbers.

 Concepts Used:
 - Reference variables
 - Functions
 - Call by Reference
 - Memory Manipulation
*/

#include<iostream>

using namespace std;
// Function to swap two numbers using C++ Reference Variables
void swapReferenceVar(int &a,int &b){
    int temp= a;                     
    a=b;                             
    b=temp;                          
}
int main(){
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"The value of x and the value of y before the swap are "<<x<<" and "<<y<<" respectively"<<endl;
    swapReferenceVar(x,y); // This will swap a and b using reference variables
    cout<<"The value of x and the value of y after the swap are "<<x<<" and "<<y<<" respectively"<<endl;
    cout<<"SUCCESSFULLY SWAPPED TWO NUMBERS USING REFERENCE VARIABLES"<<endl;
    return 0;
}
