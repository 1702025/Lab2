#include <iostream>
using namespace std;
class invoice
{
public:
      invoice (string name,string description,int quantity,double price)
      {
        name_of_item=name;
        description_of_item=description;
        quantity_of_item=quantity;
        price_per_item=price;
      }
      void setInvoiceAmoun()
      {
        if (quantity_of_item>=0 && price_per_item>=0)
        {
          total=quantity_of_item*price_per_item;
        }
        else
        {
          quantity_of_item = 0;
          price_per_item = 0;
          total=0;
        }

      }
      string getname()
      {
        return name_of_item;
      }
      string getdescription()
      {
        return description_of_item;
      }
      double getquantity()
      {
        return quantity_of_item;
      }
      double getprice()
      {
        return price_per_item;
      }
      double getInvoiceAmoun()
      {
        return total;
      }
private:
  double total;
  double price_per_item;
  int quantity_of_item;
  string name_of_item;
  string description_of_item;
};
int main(int argc, char const *argv[])
{
invoice a("light ","12qa3w3  ", -4 , 150);
a.setInvoiceAmoun();
std::cout<<" name       ="<<a.getname()<<endl;
std::cout<<" description="<<a.getdescription()<<endl;
std::cout<<" quantity   ="<<a.getquantity()<<endl;
std::cout<<" price      ="<<a.getprice()<<endl;
std::cout<<" total      ="<<a.getInvoiceAmoun()<<endl;
cout<<endl;
invoice b("bulb ","12qtdaw3  ", 6 , -120);
b.setInvoiceAmoun();
std::cout<<" name       ="<<b.getname()<<endl;
std::cout<<" description="<<b.getdescription()<<endl;
std::cout<<" quantity   ="<<b.getquantity()<<endl;
std::cout<<" price      ="<<b.getprice()<<endl;
std::cout<<" total      ="<<b.getInvoiceAmoun()<<endl;
cout<<endl;
invoice c("fan ","12qajhsg53  ", -3 , -600);
c.setInvoiceAmoun();
std::cout<<" name       ="<<c.getname()<<endl;
std::cout<<" description="<<c.getdescription()<<endl;
std::cout<<" quantity   ="<<c.getquantity()<<endl;
std::cout<<" price      = "<<c.getprice()<<endl;
std::cout<<" total      = "<<c.getInvoiceAmoun()<<endl;
cout<<endl;
invoice d("mobile ","12q]shw3  ", 8 , 800);
d.setInvoiceAmoun();
std::cout<<" name       ="<<d.getname()<<endl;
std::cout<<" description="<<d.getdescription()<<endl;
std::cout<<" quantity   ="<<d.getquantity()<<endl;
std::cout<<" price      = "<<d.getprice()<<endl;
std::cout<<" total      = "<<d.getInvoiceAmoun()<<endl;


  return 0;
}
