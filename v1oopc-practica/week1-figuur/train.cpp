
#include "train.hpp"
int startwagon_x = 80;
int startwagon_y = 80;
int endwagon_x = 160;
int endwagon_y = 160;
int startwindowleft_x = 90;
int startwindowleft_y = 90;
int endwindowleft_x = 110;
int endwindowleft_y =120;
int startwindowright_x = 130;
int startwindowright_y = 90;
int endwindowright_x = 150;
int endwindowright_y =120;
int leftweel_x = 90;
int leftweel_y = 165;
int rightweel_x = 150;
int rightweel_y = 165;
int radius = 5;


train::train(window & w, int wagons):
	wagon( w, wagons *startwagon_x, wagons *startwagon_y, wagons *endwagon_x, wagons *endwagon_y ),
	windowleft( w, wagons *startwindowleft_x, wagons *startwindowleft_y, wagons * endwindowleft_x, wagons * endwindowleft_y),
	rightwindow( w, wagons * startwindowright_x, wagons * startwindowright_y, wagons * endwindowright_x,wagons * endwindowright_y),
	leftweel( w, wagons * leftweel_x, wagons * leftweel_y, wagons *radius),
	rightweel(  w, wagons *rightweel_x , wagons *rightweel_y, wagons * radius)
	
	
{}

void train::print(){
	wagon.print();
	windowleft.print();
	rightwindow.print();
	leftweel.print();
	rightweel.print();
}
