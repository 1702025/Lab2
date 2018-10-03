#include<iostream>
using namespace std;
class Employee
{
public:
    Employee(double initial_balance,string first,string last)
    {
      balance=initial_balance;
       first_name= first;
       last_name= last;
    }
    void  setraise_salary()
    {
      if(balance>=0)
      {
        monthly=balance;
        balance=balance*12;
        yearly=balance;
        double rise=(balance*10)/100;
        balance=balance+rise;
       }
      else
      {

        balance=0;
        monthly=balance;
        yearly=balance;
      }
    }
    double getraise_salary()
    {
      return balance;
    }
    double getyearly_salary()
    {
      return yearly;
    }
    double getmonthly_salary()
    {
      return monthly;
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
    double  balance,monthly,yearly;
    string first_name;
    string last_name;
};

int main(int argc, char const *argv[])
{
  cout<<"Employee one : "<<endl;
  Employee emp1(-123,"ali","abdullah");
  emp1.setraise_salary();
  std::cout<<"Employee first name : "<<emp1.getfirst_name()<<endl;
  std::cout<<"Employee last name : "<<emp1.getlast_name()<<endl;
  std::cout<<"monthly salary  balance is = "<<emp1.getmonthly_salary()<<endl;
  std::cout<<"yearly salary  balance is = "<<emp1.getyearly_salary()<<endl;
  std::cout<<"raise salary  balance is = "<<emp1.getraise_salary()<<endl;

  cout<<endl;
  cout<<"Employee two :"<<endl;
  Employee emp2(2000,"salman","zain");
  emp2.setraise_salary();
  std::cout<<"Employee first name : "<<emp2.getfirst_name()<<endl;
  std::cout<<"Employee last name : "<<emp2.getlast_name()<<endl;
  std::cout<<"monthly salary  balance is = "<<emp2.getmonthly_salary()<<endl;
  std::cout<<"yearly salary  balance is = "<<emp2.getyearly_salary()<<endl;
  std::cout<<"raise salary  balance is = "<<emp2.getraise_salary()<<endl;


  return 0;
}
