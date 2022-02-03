#include <iostream>

int main()
{
  int value=0,curvalue,count =0;
  if(std::cin>> value){
    curvalue = value;
    count = 1;
    while(std::cin>> value)
    {
      if(curvalue == value){
        count++;

      }
      else{
        std::cout << curvalue <<"occur"<<count<< "times"<<std::endl;
        curvalue =value;
        count= 1;

      }

    }
    std::cout<< curvalue<< "occur "<<count<<"times"<<std::endl; 
  }
  return 0;
}