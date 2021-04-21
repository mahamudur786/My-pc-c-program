#include<bits/stdc++.h>
using namespace std;

class stt{
	int a,b;
public:
	void showdata()
	{
		a=39;
		b=89;
		cout<<"obj created "<<this<<endl; //this pointer pointing to the object memory location
		cout<<"a: "<<this->a<<endl;
		cout<<"b: "<<this->b<<endl;
	}
};

int main()
{
stt t1;
t1.showdata();
return 0;	
}
