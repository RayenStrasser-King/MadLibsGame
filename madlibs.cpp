//Authors:Rayen Strasser-King 
#include <iostream>
#include <string>
using namespace std;

int main()
{
std::string enter1;
double enter2 = 0.0;
int enter3;
std::string enter4;
std::string enter5;

std::cout<<"Welcome to MadLibs! Please enter a Place:\n";
std::cin>>enter1;
std::cout<<"Please enter a Number with a Decimal:\n";
std::cin>>enter2;
std::cout<<"Please enter a Whole Number:\n";
std::cin>>enter3;
std::cout<<"Please enter a Silly Word:\n";
std::cin>>enter4;
std::cout<<"Please enter an Object\n";
std::cin>>enter5;

std::cout<<"I was driving to ";
cout<<enter1;
cout<<" which was ";
cout<<enter2;
cout<<" miles away, but that's ok because I drive a hybrid. ";
cout<<"It only took me ";
cout<<enter3;
cout<<" hours to get there, which went by fast because I was listening to the same songs on the radio over and over again. I was on ";
cout<<enter4;
cout<<" street when I almost ran over a ";
cout<<enter5;
cout<<"! I cried for hours afterwards. ";

cout<<std::endl<<"Thank you for playing!\n";
  return 0;
}



