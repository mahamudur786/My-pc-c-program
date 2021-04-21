// C++ program to convert 12 hour to 24 hour
// format
#include<iostream>
using namespace std;
/* Begin
   In main(),
   If median = pm
      Check if entered hours is less than 12
         Then add 12 to hours and print the time in 24 hours format.
      Check if entered hours is equal to 12
         Then print “00” as hours and print the time in 24 hours format.
   Else If median=am
      Check if entered hours is less than 12
         Then print the time in 24 hours format.
      Check if entered hours is equal to 12
         Then print “12” as hours and print the time in 24 hours format.
   Else print wrong choice.
End */
void print24(string str)
{
	// Get hours
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);

	// If time is in "AM"
	if (str[8] == 'A')
	{
		if (hh == 12)
		{
			cout << "00";
			for (int i=2; i <= 7; i++)
				cout << str[i];
		}
		else
		{
			for (int i=0; i <= 7; i++)
				cout << str[i];
		}
	}

	// If time is in "PM"
	else
	{
		if (hh == 12)
		{
			cout << "12";
			for (int i=2; i <= 7; i++)
				cout << str[i];
		}
		else
		{
			hh = hh + 12;
			cout << hh;
			for (int i=2; i <= 7; i++)
				cout << str[i];
		}
	}
}

int main()
{
string str;
cin>>str;
//string str = "07:05:45PM";
print24(str);
return 0;
}

