/*
------------------------------------------------------------
Program Name : Attendance Management System
Description  : This program checks whether a student is
               eligible for semester examinations based on
               attendance percentage entered by a professor.
Concepts     : Arrays, Loops, Conditional Statements,
               Input Validation
Language     : C++
Author       : Pradeep S
------------------------------------------------------------
*/
#include<iostream>

using namespace std;

int main(){
    int password=1234;
    int pass;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"              WELCOME TO THE ATTENDANCE MANAGEMENT SYSTEM OF OUR COLLEGE              "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<" First of all please verify yourself by entering your password "<<endl;
    cout<<"Enter your password: ";
    cin>>pass;
    if (password==pass){
        cout<<"Verified!! Your are one of the professor of this college"<<endl;
        cout<<"Plese carry on with your attendance updation of your class"<<endl;
        int days;
        string name;
        cout<<"Enter the name of the student for whom you need to update attendance: ";
        cin.ignore(); // clear leftover newline
        getline(cin, name);
        cout<<"Enter the total number of days for marking the attendance: ";
        cin>>days;
        int attendance[days];
        int present=0,absent=0;// Initialization must as it may contain garbage values ONLY WHEN DIRECLY INCREMENTING OR USING THE VAIRABLE
        cout<<"ATTENDANCE ENTRY SECTION"<<endl;
        cout<<"Please mark the attendance of that student"<<endl;
        cout<<"Enter 1 for present and 0 for absent"<<endl;
        for (int i = 0; i < days;i++)
        {
            cout<<"Day "<<i+1<<" Attendance ";
            cin>>attendance[i];
            if (attendance[i]==1){
                present++;
            }
            else if (attendance[i]==0)
            {
                absent++;
            }
            else{
                cout<<"Invalid input!! Enter either 0 or 1 only."<<endl;
                i--;// i gets decremented and again asks for the same day's attendance
            }
        }
        float attendance_percent;
        attendance_percent=(present*100.0)/days;// As attendance_percent can have decimal values we have given float inorder to not use decimal precision so 100.0
        cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                      ATTENDANCE SUMMARY                                             "<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Total working days: "<<days<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"No. of Days Present: "<<present<<endl;
        cout<<"No. of Days Absent: "<<absent<<endl;
        if (attendance_percent>=75){
            cout<<"Attendance percentage is: "<<attendance_percent<<" % "<<endl;
            cout<<"Status: ELIGIBLE for semester exam"<<endl;
        }
        else{
            cout<<"Attendance percentage is: "<<attendance_percent<<" % "<<endl;
            cout<<"Status: NOT ELIGIBLE (Attendance below 75%)"<<endl;
        }
    }
    else{
        cout<<"Wrong password!!"<<endl;
        cout<<"Please try again"<<endl;
        cout<<"If this is a mistake immediately contact the office"<<endl;
    }
    cout<<"Thank you for using Attendance management system"<<endl;
    return 0;
}
