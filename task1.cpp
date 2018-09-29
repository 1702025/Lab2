#include<iostream>
using namespace std;
class account
{
public:
    account(double inital_balance)
    {
      balance=inital_balance;
    }
    void credit (double amount)
    {
      balance+=amount;
    }
    void debit(double value)
    {
      if (balance >value)
      {
        balance-=value;
      }
      else
      {
        cout<<"Debit amount exceeded account balance "<<endl;
      }
    }
    double getbalance()
    {
      return balance;
    }
private:
    double  balance;
};

int main(int argc, char const *argv[])
{
  account acct1(45);
  std::cout<<acct1.getbalance()<<endl;
  acct1.credit(2323);
  std::cout<<acct1.getbalance()<<endl;
  int value;
  cout<<"enter debit amount : ";
  cin>>value;
  acct1.debit(value);
  std::cout<<acct1.getbalance()<<endl;

  return 0;
}
