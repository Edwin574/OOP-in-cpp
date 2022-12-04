#include <iostream>
// #include <string.h>
// #include <strings.h>

using namespace std;
using std::string;
// creating an abstract class *implementing abstrattion
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private: // class attributes are set to be private
    string Company;
    int Age;

protected:
    string Name;

public: // implementing getters and setter methods
    void setName(string name)
    {
        if (name.length() <= 20)
            Name = name;
    }
    string getName()
    {

        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    // methods
    void IntroduceYourself()
    {
        cout << "Name -" << Name << endl;
        cout << "Company -" << Company << endl;
        cout << "Age -" << Age << endl;
    }
    void AskForPromotion()
    {
        if (Age >= 30)
            cout << Name << " got promoted" << endl;
        else
            cout << Name << " Sorry, NO promotion for you" << endl;
    }
    virtual void work(){   //used for implementing polymorphism
        cout << Name << " is checking email, task backlog, performing other tasks..." << endl;
    }
};
// implementing inheritance
class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    };
    void fixBug()
    {
        cout << Name << " is fixing bugs using " << FavProgrammingLanguage << endl;
    }
    void work(){
        cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};
class Teacher :public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is prepairing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject)
         : Employee(name, company, age)
    {
        Subject = subject;
    };
     
    void work(){
        cout << Name << " is teaching " << Subject<< endl;
    }
};

int main()
{
    Employee employee1 = Employee("Edwin", "Silicon Savanna", 20);
    // employee1.IntroduceYourself();

    Employee employee2 = Employee("Adrian", "Amazon", 35);
    // employee2.IntroduceYourself();

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();
    Developer d = Developer("Collo", "colls_labs", 20, "php");
    // d.work();
    // d.fixBug();
    // d.AskForPromotion();

    Teacher t = Teacher("Md. Muhele", "Aloysius", 27, "Geography");
    // t.PrepareLesson();
    // t.AskForPromotion();
    // t.work();

    //The most common use of polymorphism is when a parent class reference is used to refer to a child class object

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->work();
    e2->work();
}
