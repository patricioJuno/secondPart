#include "Airplane.h"
#include <iostream>

using namespace std;

Airplane::Airplane()
{
    this -> type = " ";
    this -> model = " ";
    this -> date = 0;
}

Airplane::Airplane(char *typeA, char *modelA, int dateA)
{
    type = new char[20];
    type = typeA;
    model = new char[20];
    model = modelA;
    date = dateA;
}

Airplane::~Airplane()
{
    delete[] model;

}

int Airplane::getDate(){return date;}


SikorskyS70::SikorskyS70(){
    this -> type = " ";
    this -> model = " ";
    this -> date = 0;
    this -> service = " ";
}

SikorskyS70::SikorskyS70(char *typeB, char *modelB, int dateB, char *serviceB){
    type = new char[20];
    type = typeB;
    model = new char[20];
    model = modelB;
    date = dateB;
    service = new char[20];
    service = serviceB;
}

SikorskyS70::~SikorskyS70(){
    delete[] model;
    delete[] type;
    delete[] service;
}

void SikorskyS70::sendMessage(){
    cout << "Central tower, here " << model << "\n";
    cout << "Type " << type << "\n";
    cout << "Day " << date << "\n";
    cout << "On my position, service of " << service << "\n \n";
}

LockheedMartinF16::LockheedMartinF16(){
    this -> type = " ";
    this -> model = " ";
    this -> date = 0;
    this -> service = " ";
}

LockheedMartinF16::LockheedMartinF16(char *typeC, char *modelC, int dateC, char *serviceC)
{
    type = new char[20];
    type = typeC;
    model = new char[20];
    model = modelC;
    date = dateC;
    service = new char[20];
    service = serviceC;
}

LockheedMartinF16::~LockheedMartinF16()
{
    delete[] model;
    delete[] type;
    delete[] service;
}

void LockheedMartinF16::sendMessage(){
    cout << "Central tower, here " << model << "\n";
    cout << "Type" << type << "\n";
    cout << "Day " << date << "\n";
    cout << "On my position, service of " << service << "\n \n";
}
