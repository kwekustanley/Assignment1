#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    cout << "WELCOME TO GARZO\n";
    string name;
    double pr=500;
    double ph=350;
    double ta=100;
    string printer;
    string phone;
    string table;
    float vat;
    cout <<" Please enter your name \n";
    getline(cin,name);
    double id;
    double totalamount;
    double qty;
    cout<<" Enter your unique id number\n";
    cin>> id;
    string itemssold;
    cout << " What do you want to buy?\n";
    cout << " Items Sold here ;\n" << "  Printer\n" << "  Phone\n" << "  Table\n";
    cout << "   \n";
    cout<< "  Printer costs $500\n";
    cout<< "  Phone costs $350\n";
    cout<< "  Table costs $100\n";
    cin>> itemssold;
      if (itemssold =="printer")
    {
         cout <<" How many do you want to buy?\n";

    cin >>qty;
     vat=0.12*(pr*qty);
    totalamount=(pr*qty+vat);
    cout<< " Total Amount is\n";
    cout<<"$" << totalamount <<endl;

    }
     else if (itemssold =="phone")
    {
         cout <<" How many do you want to buy?\n";

    cin >>qty;
      vat=0.12*(ph*qty);
    totalamount=(ph*qty+vat);
    cout<< " Total Amount is\n";
     cout<< "$" << totalamount <<endl;
    }
       else if (itemssold =="table")
    {
         cout <<" How many do you want to buy?\n";

    cin >>qty;
     vat=0.12*(ta*qty);
    totalamount=(ta*qty+vat);
    cout<< " Total Amount is\n";
     cout<<"$" << totalamount <<endl;
    }
      cout << "Please enter amount to make payment.\n";
      double payment;
      double balance;

      cin>>payment;
        if (payment >= totalamount)

      {
        cout << "Your available balance is \n";
         balance=(payment-totalamount);
        cout <<"$"<< balance <<endl;
      }

      if (payment > totalamount)
      {
         cout <<".....................................................\n";
      cout <<" ***RECEIPT*** \n";
      cout << "Name of customer: " << name << endl;
      cout << "Customer's unique ID: "<< id <<endl;
      cout << "Item Bought: " << itemssold << endl;
      cout << "Quantity Bought: " << qty <<endl;
      cout << "Vat Amount: " << "$" << vat << endl;
      cout << "Total Cost: " << "$"<< totalamount <<endl;
      cout << "Total Amount paid: "<< "$"<< payment << endl;
      cout << "Balance: "<<"$" << balance <<endl;
      cout <<"........ THANK YOU FOR TRANSACTING WITH US..........\n";
      cout << ".....................................................\n";

      }
      else
      {
          cout<< "Sorry your money isn't enough to make purchases.\n";
      }

    return 0;
}
