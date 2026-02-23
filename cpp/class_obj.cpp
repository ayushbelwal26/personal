#include <iostream>
using namespace std;
class Teacher{
private:
    double salary;
public:
    //non parameterized
    Teacher(){
        cout << "hi i am constructor"<< endl;
        dept = "computer science";
    }
    string name;
    string dept;
    string subject;

    void setdept(string d){
        dept = d;
    }
    
    // setter
    void setsalary(double s){
        salary = s ;
    }

    // getter 

    double getsalary(){
        return salary;
    }

};

int main(){
    Teacher t1; //contructor call
    t1.name = "Ayush";
    t1.subject = "Dsa";
    t1.setsalary(25000);
    cout << t1.dept<< endl ;
    t1.setdept("AI");
    cout << t1.dept << endl;
    cout << t1.getsalary() << endl;
}