#include <bits/stdc++.h>

using namespace std;

struct studentType{

    string studentFName;
    string studentLName;
    int testScore;
    char grade;

};

studentType student[20];

int high(){

    int temp = 0;

    for(int i = 0; i < 20; i++){

        if(student[i].testScore>temp){
            temp = student[i].testScore;
        }

    }

    return temp;
}

void grade(){

    for(int i = 0; i < 20; i++){

        if(student[i].testScore>=90){
            student[i].grade = 'A';
        }else if(student[i].testScore>=80){
            student[i].grade = 'B';
        }else if(student[i].testScore>=70){
            student[i].grade = 'C';
        }else if(student[i].testScore>=60){
            student[i].grade = 'D';
        }else if(student[i].testScore>=50){
            student[i].grade = 'E';
        }else{
            student[i].grade = 'F';
        }

    }

}

void masukkan(){

    cout<<"Input the student first name, last name, and score test"<<endl;
    for(int i = 0; i < 20; i++){

        cin>>student[i].studentFName>>student[i].studentLName>>student[i].testScore;

    }

}

void pintar(){

    int temp = high();
    
    cout<<"\nThe student who got highest score: "<<endl;
    for(int i = 0; i < 20; i++){

        if(student[i].testScore==temp){

            cout<<student[i].studentFName<<" "<<student[i].studentLName<<endl;

        }

    }

}

int main(){

    masukkan();
    grade();
    pintar();


}
