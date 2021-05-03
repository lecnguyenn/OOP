#include<iostream>
using std::string;

class AbstractEmloyee{
    virtual void AskForPromotion() = 0;
};



class Employee:AbstractEmloyee
{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name){ //setter
        Name = name;
    }
    string getName(){  //getter
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroductionYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age){  // constructors
        Name = name;
        Company = company;
        Age = age;
    }
    void  AskForPromotion(){
        if(Age > 30)
            std::cout << Name <<" got promoted!" << std::endl;
        
        else
            std::cout<< Name <<", Sorry No promoted for you" << std::endl;
        
    }

    virtual void Work(){
        std::cout<< Name << " is  buying, Performing task..." << std::endl;
    }
};


class Developer:public Employee {
    public:
    string FavProgramminglanguage;
    Developer(string name, string company,int age, string favprogramming)
        :Employee(name, company, age)
        {
            FavProgramminglanguage = favprogramming;
        }
        void FixBug(){
            std::cout<< Name <<" Fixed bug using"<< FavProgramminglanguage << std::endl;
        }
        void Work(){
            std::cout<<Name << " is Coding"<< FavProgramminglanguage <<std::endl;
        }
};


class Teacher:public Employee{
    public:
    string Subject;
    void PrepareLesson(){
        std::cout << Name << " is preparing "<< Subject << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
    :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        std::cout<<Name<<" is Teaching "<< Subject<< std::endl;
    }
};


int main(){
    // Employee employee1 = Employee("Nguyen", "PTIT", 22);
    // Employee employee2 = Employee("Ngan", "APD", 33);

   Developer d = Developer("Nguyen", "PTIT", 22, "C++");
   // d.FixBug();
    Teacher t = Teacher("Ngan", "PTIT", 40, "Math");

    Employee* e1 = &d;
    Employee* e2 = &t;


    e1->Work();
    e2->Work();

}

