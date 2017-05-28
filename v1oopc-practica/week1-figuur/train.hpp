#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "window.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

class train {
private:
	rectangle wagon, windowleft, rightwindow;
	circle leftweel, rightweel;
public:
	train(window & w,int wagons);
	void print();
};

#endif