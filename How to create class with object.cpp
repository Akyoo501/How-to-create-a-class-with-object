#include <iostream>
using namespace std;

class Student{
	public:
		int ID;
		string Course;
};

int main(){
	Student Akyoo;
	
	Akyoo.ID=22100523140058;
	Akyoo.Course="Computer Science";
	
	cout<<"Registration Number: "<<Akyoo.ID<<endl;
	cout<<"Course Name: "<<Akyoo.Course<<endl;
	
	return 0;
}
