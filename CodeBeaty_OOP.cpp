#include<iostream>
using std::string;

class AbstractEmloyee{
    virtual void AskForPromotion() = 0;
};



class Employee:AbstractEmloyee
{
private:
    string Name;
    string Company;
    int Age;
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
};


int main(){
    Employee employee1 = Employee("Nguyen", "PTIT", 22);
    Employee employee2 = Employee("Ngan", "APD", 33);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    
    

}

