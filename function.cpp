#include <iostream>
int area(int);
int area(int x)
  {
    return (3.14*x*x);
  }
int main()
{
   
  int a;
  std::cin>>a;
  std::cout <<"the area is"<< area(a);
  return 0; 
}
