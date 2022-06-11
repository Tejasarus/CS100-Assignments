#ifndef ADD_HPP
#define ADD_HPP
#include "base.hpp"

class Add: public Base
{
    private:
	Base* val1;
	Base* val2;
     
     public:
	 Add(Base* value1, Base* value2) : Base() {	val1  = value1;	val2  = value2;}
     virtual double evaluate() {return val1->evaluate() + val2->evaluate();}
     virtual std::string stringify() {return val1->stringify() + " + " + val2->stringify();}
};
#endif