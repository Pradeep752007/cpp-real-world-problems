// This program illustrates the ATM PIN Verification System using While Loop (C++)
#include<iostream>

using namespace std;

int main(){
    cout<<"WELCOME TO THE BANK OF INDIA"<<endl;
    cout<<"Please insert your card "<<endl;
    int PIN;
    int attempt=0;
    const int CorrectPIN=2345;
    cout<<"Please Be careful while entering your pin as you will be provided with only three attempts"<<endl;
    while (attempt<3){
        cout<<"Enter your 4-digit PIN: ";
        cin>>PIN;
        attempt++;
        if(PIN==CorrectPIN){
            cout<<"PIN VERIFIED SUCCESSFULLY!!"<<endl;
            cout<<"Access Granted."<<endl;
            cout<<"Thank you for banking with us."<<endl;
            break;
        }
        else{
            cout<<"ATTENTION!!"<<endl;
            cout<<"This was the chance number "<<attempt<<" to enter your pin"<<endl;
            if (attempt==3){
                cout << "You have entered the wrong PIN 3 times." << endl;
                cout << "Your ATM card has been BLOCKED for security reasons." << endl;
                cout << "Please contact your nearest branch." << endl;
            }
        }

    }
    return 0;
}
