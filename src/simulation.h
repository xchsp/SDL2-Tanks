#ifndef _SIMULATION_H_
#define _SIMULATION_H_
#include <vector>
#include "renderer.h"
#include "global.h"
#include "object.h"

class Simulation{
    Renderer* renderer; 
    std::vector<Object*> objects;

public:
    Simulation(Renderer* renderer);
    void update(unsigned int delta);
    void add(Object* object);
};

#endif
