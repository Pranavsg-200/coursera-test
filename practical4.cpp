
#include<iostream>
#include <cstring>
using namespace std;

class student
{
    private: 
        char name[20], std[3],div[5],dob[11],blood_grp[5],cont_add[5],phone_num[11],licence_No[16];
        int roll_No; 
    public:
    static int stdcnt;
    student();      
    student(char name1[20],int roll_No1,char std1[3],char div1[5],char dob1[11],char blood_grp1[5],char cont_add1[5],char phone_num1[11],char license_No1[16]);
    void display();
    student(student &temp);
    inline void get();
    static void show_cnt(){
      cout<<"Number of objects are : "<<stdcnt;
    }
};

student::student(){
  roll_No = 0;
  strcpy(name,"MAHESH");
  strcpy(std,"SE");
  strcpy(div,"Comp");
  strcpy(dob,"DD/MM/YYYY");
  strcpy(blood_grp,"AB");
  strcpy(cont_add,"Pune");
  strcpy(phone_num,"1234567890");
  strcpy(licence_No,"MH143456789");
  stdcnt++;
}
student::student(char name1[20],int roll_No1,char std1[],char div1[],char dob1[],char blood_grp1[],char cont_add1[],char phone_num1[],char license_No1[]){
  strcpy(this->name,name1);
  this->roll_No = roll_No1;
  strcpy(this->std,std1);
  strcpy(this->div,div1);
  strcpy(this->dob,dob1);
  strcpy(this->blood_grp,blood_grp1);
  strcpy(this->cont_add,cont_add1);
  strcpy(this->phone_num,phone_num1);
  strcpy(this->licence_No,license_No1);
  stdcnt++;
}
student::student(student &temp){
  strcpy(name,temp.name);
  roll_No = temp.roll_No;
  strcpy(std,temp.std);
  strcpy(div,temp.div);
  strcpy(dob,temp.dob);
  strcpy(blood_grp,temp.blood_grp);
  strcpy(cont_add,temp.cont_add);
  strcpy(phone_num,temp.phone_num);
  strcpy(licence_No,temp.licence_No);
  stdcnt++;
}

inline void student::get(){
  cout<<"Enter name :";
  cin>>name;
  cout<<"Enter roll no :";
  cin>>roll_No;
  cout<<"Enter class :";
  cin>>std;
  cout<<"Enter division :";
  cin>>div;
  cout<<"Enter DOB :";
  cin>>dob;
  cout<<"Enter Blood group :";
  cin>>blood_grp;
  cout<<"Enter Address :";
  cin>>cont_add;
  cout<<"Enter phone number :";
  cin>>phone_num;
  cout<<"Enter license number :";
  cin>>licence_No;
}

void student:: display(){
  cout<<name<<"\t"<<roll_No<<"\t"<<std<<"    "<<div<<"  "<<dob<<"      "<<blood_grp<<"           "<<cont_add<<"          "<<phone_num<<"   "<<licence_No<<endl;
}

int student::stdcnt=0;

int main()
{
    student s1;
 
    student s2("GAIKWAD",27,"SE","comp","00/00/0000","AB","I2IT","123456789","MH-1456845");
    student s3(s2);
    student s4;
    // int n;
    // cout<<"enter the number of object ";
    // cin>>n;
    // student a[n];
    // for(int i=0;i<n;i++){
    //     a[i].get();
    // }
    // for(int i=0;i<n;i++){
    //     a[i].display();
    // }
    s4.get();
    cout<<"\nName  "<<" RollNo "<<" Class "<<" Div "<<"  Date Of Birth "<<" Blood Group "<<" Contact add "<<"   Phone No "<<"  License No "<<endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    student::show_cnt();
    return 0;
}

