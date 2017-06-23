#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(){
    day = 0;
    month = 0;
    year = 0;
}

Birthday::Birthday(int dayA, int monthA, int yearA){
    day = dayA;
    month = monthA;
    year = yearA;
}

Birthday::~Birthday(){

}

int Birthday::getDay(){
    return day;
}

int Birthday::getMonth(){
    return month;
}

int Birthday::getYear(){
    return year;
}
