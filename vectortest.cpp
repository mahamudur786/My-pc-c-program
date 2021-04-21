#include<bits/stdc++.h>
using namespace std;
int main ()
{
	vector <int> v1;
	cout<<"Vector capacity "<<v1.capacity()<<endl;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	cout<<"Vector capacity "<<v1.capacity()<<endl;
	//v1.shrink_to_fit();
	cout<<"Vector capacity "<<v1.capacity()<<endl;
	return 0;
}
