#include "main.hpp"

int main(){

  string nameOne;
  string nameTwo;
  string phoneNumberOne;
  string phoneNumberTwo;
  string addressOne;
  string addressTwo;

  cout<<"Questions for user one";
  cout<<"whats your name ";
  getline(cin, nameOne);
  cout<<"whats your phone number? ";
  getline(cin, phoneNumberOne);
  cout<<"whats yout address? ";
  getline(cin, addressOne);

  cout<<"Questions for user Two";
  cout<<"whats your name";
  getline(cin, nameTwo);
  cout<<"whats your phone number";
  getline(cin, phoneNumberOne);
  cout<<"whats your address";
  getline(cin,addressTwo);

  cout<<"These are your responses";
  cout<<nameOne;
  cout<<phoneNumberOne;
  cout<<addressOne;

  cout<<"these are your responses";
  cout<<nameTwo;
  cout<<addressTwo;
  cout<<phoneNumberTwo;

  return 0;

}
