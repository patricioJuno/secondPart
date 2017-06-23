#include "Person.h"
#include "Birthday.h"

Person::Person(){
    name = NULL;
    gender = NULL;
}

Person::Person(char *nameA, char *genderA, Birthday birthdayA){
    name = new char[20];
    this -> name = nameA;
    gender = new char[20];
    this -> gender = genderA;
    this -> birthday = birthdayA;
}

Person::~Person(){
    delete[] name;
    delete[] gender;
}

int Person::personsAge(){
    int currentYear = 2017;
    int currentMonth = 6;
    int currentDay = 22;
    int currentAge = currentYear - birthday.getYear();
    if(birthday.getMonth() > currentMonth){
        currentAge--;
    }
    else{
        if (birthday.getMonth() == currentMonth){
            if (birthday.getDay() > currentDay){
                currentAge--;
            }
        }
    }
    return currentAge;
}

//Caretaker

Caretaker::Caretaker() : Person(),monthlyWage(0){}

Caretaker::Caretaker(char *nameB, char *genderB, Birthday birthdayB, int monthlyWageB) : Person(nameB, genderB, birthdayB),monthlyWage(monthlyWageB){}

int Caretaker::getMonthlyWage(){
    return monthlyWage;
}

int Caretaker::personsAge(){
    int currentYear = 2017;
    int currentMonth = 6;
    int currentDay = 1;
    int currentAge = currentYear - birthday.getYear();
    if(birthday.getMonth() > currentMonth){
        currentAge--;
    }
    else{
        if(birthday.getMonth() == currentMonth){
            if(birthday.getDay() > currentDay){
                currentAge--;
            }
        }
    }
    return currentAge;
}

void Caretaker::information(){
    cout << "Name: " << name << "\n";
    cout << "Job: Caretaker\n";
    cout << "Gender: " << gender << "\n";
    cout << "Monthly Wage: " << monthlyWage << "\n";
}

//Supervisor

Supervisor::Supervisor() : Person(),monthlyWage(0){}

Supervisor::Supervisor(char *nameC, char *genderC, Birthday birthdayC, int monthlyWageC) : Person(nameC, genderC, birthdayC),monthlyWage(monthlyWageC){}

int Supervisor::getMonthlyWage(){
    return monthlyWage;
}

int Supervisor::personsAge(){
    int currentYear = 2017;
    int currentMonth = 6;
    int currentDay = 21;
    int currentAge = currentYear - birthday.getYear();
    if(birthday.getMonth() > currentMonth){
        currentAge--;
    }
    else{
        if(birthday.getMonth() == currentMonth){
            if(birthday.getDay() > currentDay){
                currentAge--;
            }
        }
    }
    return currentAge;
}

void Supervisor::information(){
    cout << "Name: " << name << "\n";
    cout << "Job: Supervisor\n";
    cout << "Gender: " << gender << "\n";
    cout << "Monthly Wage: " << monthlyWage << "\n";
}

