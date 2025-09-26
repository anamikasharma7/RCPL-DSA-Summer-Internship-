 #include <iostream>
using namespace std;

class btech{
    public:
    int roll;
    float cgpa;
    
    btech(){}
    btech{int r,float f:roll(r),cgpa(f){}
};
int main(){
    btech s1,s2(44,6.7);


    cout<<"Roll : "<<s2.roll<<endl;
    cout<<"CGPA: "<<s2.cgpa<<endl;

    btech s3(s2);
    btech s3{s2};
    btech s3=s2;

    cout<<"Roll : "<<s2.roll<<endl;
    cout<<"CGPA: "<<s2.cgpa<<endl;




    return 0;
}
}
