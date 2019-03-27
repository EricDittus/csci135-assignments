#include <iostream>

void sort2(double* p, double* q){
  double first_value_holder = *p;
  double second_value_holder = *q;
  if(second_value_holder < first_value_holder){
    *p = second_value_holder;
    *q = first_value_holder;
  }
}
int main(){
  double x =5.0;
  double y =10.0;
  sort2(&x,&y);
  return 0;
}
