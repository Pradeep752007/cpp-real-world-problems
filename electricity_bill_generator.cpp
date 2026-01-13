//This program generates the electricity bill for a consumer based on unit consumption
#include<iostream>

using namespace std;

int main(){
    int id;
    string consumer_name; //string data type is used to get the name of the consumer 
    const int correct_id=34573;
    float bill;
    int units;
    float i=1.5,f=2.5,r=4.0,w=6.0;
    cout<<"Welcome to the official website of Electricity board of India"<<endl;
    cout<<"The amount for different unit ranges are provided below for the consumer reference"<<endl;
    cout<<"0-100 units Rs: "<<i<<" per unit"<<endl;
    cout<<"100-200 units Rs: "<<f<<" per unit"<<endl;
    cout<<"200-300 units Rs: "<<r<<" per unit"<<endl;
    cout<<"Above 300 units Rs: "<<w<<" per unit"<<endl;
    cout<<"......................................................................"<<endl;
    cout<<"As this website is only for officials to login please enter your 5-digit id : ";
    cin>>id;
    if (id==correct_id){
        cout<<"VERIFIED!! you are an officer of the electricity board"<<endl;
        cout<<"Please go ahead with your work sir/madam"<<endl;
        cout<<"Enter the consumer name for whose electricity bill is to be generated: ";
        cin.ignore();              // clear leftover newline
        getline(cin, consumer_name);  
        cout<<"Enter the units consumed by this consumer: ";
        cin>>units;
        if (units<0){
            cout<<"Invalid units please enter valid units consumed"<<endl;
        }
        else if((units>0) && (units<=100)){
            bill=units*i;
        }
        else if((units>100) && (units<=200)){
            bill=units*f;
        }
        else if((units>200) && (units<=300)){
            bill=units*r;
        }
        else{
            bill=units*w;
        }
        if (units>=0){
            cout<<"------------------------------------------------------"<<endl;
            cout<<"        ELECTRICITY BILL SUMMARY                      "<<endl;
            cout<<"------------------------------------------------------"<<endl;
            cout<<"Consumer Name : "<<consumer_name<<endl;
            cout<<"Units Consumed :  "<<units<<" units "<<endl;
            cout<<endl;
            cout<<"Bill Amount : Rs."<<bill<<endl;
            cout<<"------------------------------------------------------"<<endl;
            cout<<"Thank you for using the billing system"<<endl;
            cout<<"------------------------------------------------------"<<endl;
        }
    }
    else{
        cout<<"ACCESS DENIED!!"<<endl;
        cout<<"You are not an officer of the electricity board"<<endl;
        cout<<"So you are not allowed to login to the website"<<endl;
    }
    
    
    return 0;
}
