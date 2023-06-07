#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Point
{
	int x,y;
	public:
		Point(int=0,int=0);
		Point operator+=(Point);
		bool operator==(Point);
		Point operator++();
		Point operator++(int);
		void afficher();
};

Point::Point(int a,int b):x(a),y(b){;}
Point Point::operator+=(Point p){
	x+=p.x;
	y+=p.y;
	return *this;
}
void Point::afficher(){
	std::cout<<x<<" , "<<y<<std::endl;
}
bool Point::operator==(Point p){
	return (x==p.x && y==p.y);
}

Point Point::operator++(){
	++x;
	++y;
	return *this;
}
Point Point::operator++(int){

	Point tmp= *this;	
	x++;
	y++;
	return tmp;
}



int main(int argc, char** argv) {
	Point p(9,5),q(6,4),r;
	r=p+=q;
	p==q;
	
	
	q=p++;
	p.afficher();
	q.afficher();
	
	return 0;
}