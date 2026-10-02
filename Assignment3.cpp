#include<iostream>
using namespace std;

class product
{
     public:
     int productID;
     string product_name;
     float price;
     int monthlysales[12];

void accept()
{
  cout<<"Enter product ID:";
  cin>>productID;

  cout<<"Enter product name:";
  cin>>product_name;

  cout<<"Enter the price of product:";
  cin>>price;

  cout<<"Enter sales for 12 months: \n";
  for (int i=0; i<12; i++)
{
 cout<<"Month"<<i+1<<":";
 cin>>monthlysales[i];
}
}
 int Totalquantity()
{
  int total=0;
  for(int i=0; i<12; i++)
{
 total=total+monthlysales[i];
}
return total;
}

float TotalBill()
{
  return Totalquantity()*price;
}

void Display()
{
  cout<<"\nproduct Id : "
<<produtID;
  cout<<"\nproduct Name:"<<product_name;

  cout<<"\nprice of product:"<<price;

  cout<<"\nTotalquantity:"<<Totalquantity();
  cout<<"\nTotal Bill:"<<TotalBill()<<endl;
}
};

int main()
{
   product p;
   p.accept();
   p.Display();
return 0;
}

















