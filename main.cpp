#include <iostream>
#include <cstdlib>
#include <string>
class Tomek
{
public:
	int a;
	Tomek() {a=5;}
	~Tomek() {}
};

int main()
{
	std::cout<<"Hello. \n";
	Tomek t1;
	std::cout<<t1.a<<std::endl;
	getchar();
	return 0;
}