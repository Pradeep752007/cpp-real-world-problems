// This program gets the marks obtained as input and generates the grade card 
#include<iostream>

using namespace std;

int main(){
    int marks;
    
    cout<<"This program gets the marks obtained by a student in an exam and generates the grade card for that student"<<endl;
    cout<<"The input marks should be out of 100"<<endl;
    cout<<"Tell me your marks: ";
    cin>>marks;

    // Selection control structure: If-else-if-else ladder 
    
    if ((marks<0) || (marks>100)){
        cout<<"Invalid marks"<<endl;
        cout<<"Please recheck your marks and re-enter yours marks out of 100"<<endl;
    }
    else if(marks>=90){
        cout<<"Congratulations! you have obtained an 'A' GRADE in your exam"<<endl;
        if (marks==100){
            cout<<"WELL DONE ON SECURING A CENTUM ! CHEERS !"<<endl;
            cout<<"KEEP IT UP!!"<<endl;
        }
        else if(marks==99){
            cout<<"Keep your good run going and try to score a centum next time"<<endl;
        }
    }
    else if((marks>=75) && (marks<90)){
        cout<<"Very good, you have obtained a 'B' GRADE in your exam"<<endl;
    }
    else if((marks>=50) && (marks<75)){
        cout<<"You have obtained a 'C' GRADE in your exam"<<endl;
        cout<<"Good attempt , try hard in your upcoming exam"<<endl;
    }
    else if((marks>=35) && (marks<50)){
        cout<<"You have obtained a 'D' GRADE in your exam"<<endl;
        cout<<"You are in the danger zone !!"<<endl;
        if (marks==35){
            cout<<"You have just passed the exam "<<endl;
            cout<<"You should work extremely hard and score more in the next exam!!"<<endl;
        }
    }
    else{
        cout<<"You have failed the examination"<<endl;
    }
    return 0;
}
