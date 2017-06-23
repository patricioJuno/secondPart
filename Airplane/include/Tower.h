#ifndef TOWER_H
#define TOWER_H
#include <vector>
#include "Airplane.h"

class Tower{
  public:
    std::vector <Airplane*> airplanes;
    void inputAirplane(Airplane *w);
    void answerMessage();
};

#endif // TOWER_H
