#include "main.hpp"

int main(){

  string nameOne;
  string nameTwo;
  string phoneNumberOne;
  string phoneNumberTwo;
  string addressOne;
  string addressTwo;

  cout<<"Questions for user one"<<"\t\t"<<"\n";
  cout<<"whats your name ";
  getline(cin, nameOne);
  cout<<"whats your phone number? ";
  getline(cin, phoneNumberOne);
  cout<<"whats yout address? ";
  getline(cin, addressOne);

  cout<<"Questions for user Two"<<"\t\t"<<"\n";
  cout<<"whats your name";
  getline(cin, nameTwo);
  cout<<"whats your phone number";
  getline(cin, phoneNumberOne);
  cout<<"whats your address";
  getline(cin,addressTwo);

  cout<<"These are your responses from user one"<<"\t\t"<<"\n";
  cout<<nameOne;
  cout<<phoneNumberOne;
  cout<<addressOne<<"\t\t"<<"\n";

  cout<<"these are your responses for user two"<<"\t\t"<<"\n";
  cout<<nameTwo;
  cout<<addressTwo;
  cout<<phoneNumberTwo<<"\t\t"<<"\n";

  return 0;

}
