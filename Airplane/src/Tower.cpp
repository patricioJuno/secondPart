#include "Tower.h"
#include "Airplane.h"
#include <vector>

using namespace std;

void Tower::inputAirplane(Airplane *w)
{
    airplanes.push_back(w);
}

void Tower::answerMessage()
{
    for(int i=0; i<airplanes.size(); i++){
        airplanes[i]-> sendMessage();
    }
}
