#include<iostream>

int main(){
  int number1=15;//decimal
  int number2=017;//octal
  int number3=0x0f;//Hexadecimal
  int number4=0b00001111;//Binary-c++14
  std::cout<<"Decimal is: "<<number1<<std::endl;
  std::cout<<"octal is: "<<number2<<std::endl;
  std::cout<<"Hexadecimal is: "<<number3<<std::endl;
  std::cout<<"Binary  is: "<<number4<<std::endl;
  return 0;
  
}