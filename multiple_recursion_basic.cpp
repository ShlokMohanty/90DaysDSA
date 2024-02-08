//starting with fibbonacci number 
#include<iostream>
using namespace std;
int fibonacci(int n){
  if(n<=1){
    return 1;
  }
  last =  fibonacci(n-1);  
  second_last = fibonacci(n-2);
  return last + second_last ;
}
int main(){
  int n;
  cin >> n;
  fibonacci(n);
}
