#include <iostream>

std::string main(){
  int num1,num2,num3;
  std::string identity;
  std::cin >> num1 >> num2 >> num3;
  if(num1 > num2 > num3){
    identity == "decreasing";
  }
  if(num1 < num2 < num3){
    identity == "increasing";
  }
  else{
    identity == "neither";
  }
  return identity;
}
