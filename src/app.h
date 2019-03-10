#ifndef _APP_H_
#define _APP_H_

#include "global.h"
#include "renderer.h"
#include "controls.h"
#include "simulation.h"

class Controls;

class App{
    Renderer* renderer;
    Controls* controls;
    Simulation* simulation;

    bool running = true;
public:
    App();
    ~App();
    void run();
    void quit();

};

#endif
