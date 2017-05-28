// template

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char **argv){
   window w( 128, 64, 2 );
   

   
   rectangle box( w, 20, 10, 30, 20 );
   box.print();
   int y = 10;
   int x = 20;
   for (; x <= 30; x++){
	   if (x == 30 && y < 20 ){
		   x = 20;
		   y++;
	   }
	   w.draw(x,y);
   }
   
   return 0;
}
