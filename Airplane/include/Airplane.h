#ifndef AIRPLANE_H
#define AIRPLANE_H

class Airplane{
  public:
    Airplane();
    Airplane(char *typeA, char *modelA, int dateA);
    virtual ~Airplane();

    virtual void sendMessage()=0;
    char *getType();
    int getDate();

  protected:
    char *type;
    char *model;
    int date;


};


class SikorskyS70 : public Airplane{
  public:
    SikorskyS70();
    SikorskyS70(char *typeB, char *modelB, int dateB, char *serviceB);
    virtual ~SikorskyS70();

    void sendMessage();
    char *getType();
    char *getModel();
    int getDate();
    char *getService();

  private:
    char *type;
    char *model;
    int date;
    char *service;

};

class LockheedMartinF16 : public Airplane{
  public:
    LockheedMartinF16();
    LockheedMartinF16(char *typeC, char *modelC, int dateC, char *serviceC);
    virtual ~LockheedMartinF16();

    void sendMessage();
    char *getType();
    char *getModel();
    int getDate();
    char *getService();

  private:
    char *type;
    char *model;
    int date;
    char *service;


};

#endif // AIRPLANE_H
