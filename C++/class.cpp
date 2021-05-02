#include <iostream>
using namespace std;
using std::string;
class employee
{
public:
string name;
string company;
int age;

void intro()
{
cout<<"my name is "<<name<<endl;
cout<<"company - "<<company<<endl;
cout<<"age is "<<age<<endl;
}
employee(string n,string c,int a)
{
name=n;
company=c;
age=a;
}
};
int main()
{
employee e1=employee("keyur","Armstrong",25);
e1.intro();
employee e2=employee("key","Armsng",95);
e2.intro();
employee e3=employee("eyur","strong",22);
e3.intro();
employee e4=employee("kggg","Aereong",25);
e4.intro();
employee e5=employee("krereyur","Armng",25);
e5.intro();
employee e6=employee("werr","erng",25);
e6.intro();

}
