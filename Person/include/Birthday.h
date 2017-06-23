#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday{
    public:
        Birthday();
        Birthday(int dayA, int monthA, int yearA);
        ~Birthday();
        int getDay();
        int getMonth();
        int getYear();
    private:
        int day;
        int month;
        int year;
};

#endif // BIRTHDAY_H
