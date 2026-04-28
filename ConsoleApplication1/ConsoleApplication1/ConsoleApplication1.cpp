#include <iostream>
#include <string>
using namespace std;
class student
{
	string name;
	string fam;
	int year=2026;
	int age = 0;
public:
	student(string name_, string fam_) : name(name_), fam(fam_)
	{
	
	}
	student(string name_, int year_) : name(name_), year(year_)
	{
		age = 2026 - year;
	}
	void setName(string name_)
	{
		name_ = name;
	}
	string getNme()
	{
		return name;
	}
	string getFam()
	{
		return fam;
	}
	int getAge()
	{
		return age;
	}
};
int main()
{
	student s1("Artem", "Adss");
	student s2("Artem2", 2015);
	cout << s1.getAge() << endl;
	cout << s1.getFam() << endl;
	cout << s1.getNme() << endl;
	cout << "========" << endl;
	cout << s2.getAge() << endl;
	cout << s2.getNme() << endl;
}