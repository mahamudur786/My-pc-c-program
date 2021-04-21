/*Find the 15th term of the series?

0,0,7,6,14,12,21,18, 28

Explanation : In this series the odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }

                        And even term is a increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – } */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testno;
	cout << "enter the no :: ";
	cin >> testno;
	if(testno%2==0)
	{
		int E_term = (testno/2-1)*6;
		cout << E_term ;
		
	}else{
		int O_term = (testno/2)*7;
		cout << O_term;
	}
	return 0;
}
