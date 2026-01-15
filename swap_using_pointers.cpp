/*
 Program Name : Swapping of Two Numbers using Pointers
 Description  : Demonstrates call by reference in C++ by swapping
                two numbers using pointer variables.

 Concepts Used:
 - Pointers
 - Functions
 - Call by Reference
 - Memory manipulation
*/

#include<iostream>

using namespace std;
//Function to swap two numbers using Pointer variables
void swapPointer(int* a,int* b){
    int temp=*a;                
    *a=*b;                      
    *b=temp;                    
}
int main(){
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"The value of x and the value of y before the swap are "<<x<<" and "<<y<<" respectively"<<endl;
    swapPointer(&x,&y); // This will swap a and b using pointer reference 
    cout<<"The value of x and the value of y after the swap are "<<x<<" and "<<y<<" respectively"<<endl;
    cout<<"SUCCESSFULLY SWAPPED TWO NUMBERS USING POINTER REFERENCE"<<endl;
    return 0;
}
