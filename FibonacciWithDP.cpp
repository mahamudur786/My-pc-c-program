#include<iostream>
using namespace std;
int genFibonacci(int n) {
   int a =1,b=1;
   for (int i = 2; i <= n; i++) {
      a= b;
      b= a+b;
   }
   return b;
}
int main () {
   int n;
   cout << "Enter number of terms: "; 
   cin >>n;
   cout << n<<" th Fibonacci Terms: "<<genFibonacci(n)<<endl;
}
