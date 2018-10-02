#include<iostream>
using namespace std;
class Employee
{
public:
    Employee(double inital_balance,string first,string last)
    {
      balance=inital_balance;
       first_name= first;
       last_name= last;
    }
    void  setmonthly_salary()
    {
      balance*=12;
      double rise=(balance*10)/100;
      balance=balance+rise;
    }
    double getmonthly_salary()
    {
      return balance;
    }
    string getfirst_name()
    {
      return first_name;
    }
    string getlast_name()
    {
      return last_name;
    }
private:
    double  balance;
    string first_name;
    string last_name;
};

int main(int argc, char const *argv[])
{
  cout<<"Employee one : "<<endl;
  Employee emp1(1000,"ali","abdullah");
  emp1.setmonthly_salary();
  std::cout<<"salary  balance is = "<<emp1.getmonthly_salary()<<endl;
  std::cout<<"Employee first name : "<<emp1.getfirst_name()<<endl;
  std::cout<<"Employee last name : "<<emp1.getlast_name()<<endl;
  cout<<endl;
  cout<<"Employee two :"<<endl;
  Employee emp2(2000,"salman","zain");
  emp2.setmonthly_salary();
  std::cout<<"salary  balance is = "<<emp2.getmonthly_salary()<<endl;
  std::cout<<"Employee first name : "<<emp2.getfirst_name()<<endl;
  std::cout<<"Employee last name : "<<emp2.getlast_name()<<endl;


  return 0;
}
