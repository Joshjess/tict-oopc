// template

#include <iostream>
#include "train.hpp"
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char **argv){
   window w( 256, 256, 2 );
/*	int y = 10;
	int x = 10;
	rectangle box( w, x, y, 40, 25 );
	box.print();
	for (; x <= 40; x++){
	   if (x == 40 && y < 25 ){
		   x = 10;
		   y++;
	   }
	   w.draw(x,y);
   } */
	train trainwagaon (w,1); //max value 1
	trainwagaon.print();
   return 0;
}
