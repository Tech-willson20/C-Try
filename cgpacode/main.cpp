#include <iostream>

using namespace std;
/*
1.how many course is the person doing
2.how many is the credit  hours
3.credit hours that abd give you gp
4.gp divide by to credit hours will give your cgpa*/




class gpa{
public:
    gpa(){
    cout<<"Welcom the worls of class og grade"<<endl;

    string result(){int course;
    cout<<"how many courses are you doing\n=>"<<endl;
    cin>>course;

    string coursename[course]={}, gradepoint[course]={};
    float point[course]={}, gpa_courser[course]={}, hours[course]={};
    int markbox[course]={}
    for(int i=0;i<course;i++){
        cout<<"What is the name of the course?"<<endl;
        cin>>coursename[i];
        cout<<"What is the mark you got for "<<coursename[i]<<"?"<<endl;
        cin>>markbox[i];
        cout<<"How many credit hours is "<<coursename[i]<<"?"<<endl;
        cin>>hours[i];

        if (markbox[i]>=80 && markbox[i]<=100){
            gradepoint[i]="A";
        }
        else if (markbox[i]>=75 && markbox[i]<80){
            gradepoint[i]="B+";
        }
        else if (markbox[i]>=70 && markbox[i]<75){
            gradepoint[i]="B";
        }
        else if (markbox[i]>=65 && markbox[i]<70){
            gradepoint[i]="C+";
        }
        else if (markbox[i]>=60 && markbox[i]<65){
            gradepoint[i]="C";
        }
        else if (markbox[i]>=55 && markbox[i]<60){
            gradepoint[i]="D+";
        }
        else if (markbox[i]>=50 && markbox[i]<55){
            gradepoint[i]="D";
        }
        else {
            gradepoint[i]="E";
        }

        if (gradepoint[i]=="A"){
            point[i]=4.0;
        }
        else if (gradepoint[i]=="B+"){
            point[i]=3.5;
        }
        else if (gradepoint[i]=="B"){
            point[i]=3.0;
        }
        else if (gradepoint[i]=="C+"){
            point[i]=2.5;
        }
        else if (gradepoint[i]=="C"){
            point[i]=2.0;
        }
        else if (gradepoint[i]=="D+"){
            point[i]=1.5;
        }
        else if (gradepoint[i]=="D"){
            point[i]=1.0;
        }
        else {
            point[i]=0.5;
        };
        while(i<course){cout<<markbox[i]<<"       " <<gradepoint[i]<<"   "<<point[i] <<endl;i++;};
           gpa_courser[i]=point[i]*hours[i];
    };
};





};
class cgpa:public gpa{
    float totalgpa=0.0, totalhours=0.0;
    for(int i=0;i<course;i++){
        totalgpa+=gpa_courser[i];
        totalhours+=hours[i];
        cout<<markbox[i]<<"       " <<gradepoint[i]<<"   "<<point[i] <<endl;
    };

    float cgpa=totalgpa/totalhours;
    cout<<cgpa;
};

int main()
{
gpa will;



return 0;
};

