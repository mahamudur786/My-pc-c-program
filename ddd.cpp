#include<bits/stdc++.h>
using namespace std;
class Box{
  private:
   int l,b,h;
  public: 
   Box(){
       l=0;
       b=0;
       h=0;
   }
   Box(int length, int breadth, int height)
 {
     l= length;
     b= breadth;
     h= height;
 } 
 int getLength()   { return l; } 
 int getBreadth()  { return b; }
 int getheight()   { return h; }
 int CalculateVolume()   { return (l*b*h); }
};
int main()
{
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2;     // Should print 2 3 4 in order.
}
