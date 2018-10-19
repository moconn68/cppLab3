//Matthew O'Connell
#include <cmath>
#define PI (4* atan(1))
template<class T1>
class circle{ //circle class declaration
	public:
		//member function declarations
		circle();
		double radius();
		double circumference();
		double area();
		double populate_classobj(T1 x1=0, T1 y1=0, T1 x2=0, T1 y2=0);
		
	protected:
		//member function declaration
		double distance();//doesn't need parameters b/c has access to x1 y1 x2 y2 from within class
	private:
		//data member declaration
		double x1,y1,x2,y2;

};


//function definitions
template<class T1>
circle<T1>::circle(){
	x1=0;y1=0;x2=0;y2=0;
}
template<class T1>
double circle<T1>::distance(){
	return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}
template<class T1>
double circle<T1>::radius(){
	return distance();
}
template<class T1>
double circle<T1>::area(){
	return PI * pow(radius(), 2);
}
template<class T1>
double circle<T1>::circumference(){
	return 2 * PI * radius();
}
template<class T1>
double circle<T1>::populate_classobj(T1 x1, T1 y1, T1 x2, T1 y2){
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}