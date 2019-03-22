#include <iostream>
void reverse(int arr[], int size){
  int new_arr[size];
  for(int i = size - 1; i >= 0; i--){
    for(int j = 0; j <= size - 1;j++){
      new_arr[j] = arr[i];
    }
  }
  for(int n = 0; n <= size -1; n++){
    std::cout << new_arr[n] << " ";
  }
}

int main(){
  int argag[6] = {3,4,5,6,7,8};
  reverse(argag);

  return 0;
}
