#include <iostream>
#include "Person.h"
#include "Birthday.h"

using namespace std;

int main()
{
    Birthday BirthdayC1(2, 12, 1992);
    Caretaker Alex("Alex", "Male", BirthdayC1, 500);
    Alex.information();
    cout << "I am " << Alex.personsAge() << " years old\n\n";

    Birthday BirthdayS1(9, 10, 1986);
    Supervisor Roberta("Roberta", "Female", BirthdayS1, 1200);
    Roberta.information();
    cout << "I am " << Roberta.personsAge() << " years old\n \n";

    Birthday BirthdayS2(16, 4, 1995);
    Supervisor Jhoseph("Jhoseph", "Male", BirthdayS2, 1000);
    Jhoseph.information();
    cout << "I am " << Jhoseph.personsAge() << " years old\n \n";

    Birthday BirthdayC2(21, 9, 1983);
    Caretaker Camila("Camila", "Female", BirthdayC2, 550);
    Camila.information();
    cout << "I am " << Camila.personsAge() << " years old\n\n";
}
