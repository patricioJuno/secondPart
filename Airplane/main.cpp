#include <iostream>
#include <vector>
#include "Airplane.h"
#include "Tower.h"

using namespace std;

int main()
{
    SikorskyS70 bethaSikorskyS70("Hunting","SikorskyS70",18,"Military");
    LockheedMartinF16 bethaLockheedMartinF16("Bomber","LockheedMartinF16",04,"Military");

    Tower centralTower;
    centralTower.inputAirplane(&bethaSikorskyS70);
    centralTower.inputAirplane(&bethaLockheedMartinF16);
    centralTower.answerMessage();

}
