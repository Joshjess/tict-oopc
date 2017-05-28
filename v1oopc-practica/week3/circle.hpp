// example:
// declaration of a circle class that stores its window

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "window.hpp"

class circle {
private:
   int mid_x;
   int mid_y; 
   int radius;
   window & w;
public:
   circle( window & w, int mid_x, int mid_y, int radius ):
      mid_x( mid_x ),
      mid_y( mid_y ),
      radius( radius ),
      w( w )
   {}
   void print();
};

class ball {
private:
   vector midpoint;
   int radius;
   location speed;
public:
   ball( window & w,vector midpoint, int radius, vector speed );
   void draw();
   void update();
};


#endif // CIRCLE_HPP
