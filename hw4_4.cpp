#include <iostream>
#include <string>

using namespace std;

void swapFirstLetters(string &fName, string &lName)
{
  char temp = fName[0];
  fName[0] = lName[0];
  lName[0] = temp;
}

int longestString(string &fName, string &lName)
{
  cout << "The longer string is: ";
  if (fName.length() >= lName.length())
  {
    cout << fName << endl;
    return fName.length();
  }
  else
  {
    cout << lName << endl;
    return lName.length();
  }
}

void repeatHello(int length)
{
  for (int i = 0; i < length; ++i)
  {
    cout << "Hello";
  }
  cout << endl;
}

int main()
{
  string fName, lName;
  int length;

  cout << "Please enter your first name: ";
  cin >> fName;
  cout << "Please enter your last name: ";
  cin >> lName;

  swapFirstLetters(fName, lName);
  cout << "Your new first name is " << fName << endl;
  cout << "Your new last name is " << lName << endl;

  length = longestString(fName, lName);
  repeatHello(length);

  return 0;
}