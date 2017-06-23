#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "Birthday.h"

using namespace std;

class Person{
    public:
        Person();
        Person(char *nameA, char *genderA, Birthday birthdayA);
        ~Person();
        virtual void information()=0;
        virtual int personsAge();
    protected:
        char *name;
        char *gender;
        Birthday birthday;
};

class Caretaker : public Person{
    public:
        Caretaker();
        Caretaker(char *nameB, char *genderB, Birthday birthdayB, int monthlyWageB);
        int getMonthlyWage();
        void information();
        int personsAge();
    private:
        int monthlyWage;
};

class Supervisor : public Person{
    public:
        Supervisor();
        Supervisor(char *nameC, char *genderC, Birthday birthdayC, int monthlyWageC);
        int getMonthlyWage();
        void information();
        int personsAge();
    private:
        int monthlyWage;
};


#endif // PERSON_H
