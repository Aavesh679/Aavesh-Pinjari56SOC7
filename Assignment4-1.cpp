#include<iostream>
using namespace std;
class Employee
{
private:
int empid;
string name;
float basicsalary;
float bonus;
float Totalsalary;
public:
Employee()
{
empid=0;
name="unknown";
basicsalary=0;
bonus=0;
Totalsalary=0;

  
cout<<"Default constructor called is"<<endl;
}
Employee(int id,string n, float s,float b)
{
empid=id;
name=n;
basicsalary=s;
bonus=b;

 
 cout<<"parameterize constructor called is"<<endl;
}
 void calculate()
{
 Totalsalary=basicsalary+bonus;
}
void display(){
 cout<<"The Employee ID is"<<empid<<endl;
 cout<<"The Basic Salary is"<<basicsalary<<endl;
 cout<<"The bonus is"<<bonus<<endl;
 cout<<"The Total sallary is"<<Totalsalary<<endl;
}
};
int main(){
Employee e1;
e1.display();

Employee e2(123,"john",50000,5000);
e2.calculate();
e2.display();

return 0;
}
