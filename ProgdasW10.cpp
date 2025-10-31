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

void keluar(){

    cout<<"\n==============Display================\n";
    cout<<left<<setw(20)<<"Nama"<<setw(12)<<"Test Score"<<setw(8)<<"Grade"<<endl;

    for(int i = 0; i < 20; i++){
        string temp = student[i].studentLName + ", " + student[i].studentFName;
        cout<<left<<setw(20)<<temp<<setw(12)<<student[i].testScore<<setw(8)<<student[i].grade<<endl;

    }
    
}

int main(){

    masukkan();
    grade();
    keluar();
    pintar();

    return 0;
}
