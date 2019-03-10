#ifndef _CONTROLS_H_
#define _CONTROLS_H_

#include "global.h"
#include "app.h"
#include "tank.h"

class App;

class Controls{
   SDL_Event event;
   App* app;

   void handleEvent(SDL_Event& e);
public:
   Tank* tank;
   Controls(App* app);
   void handleEvents();
    
};

#endif
