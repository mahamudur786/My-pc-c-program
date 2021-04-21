#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    long long int D = long(A);
    cout<<hex<<showbase<<left<<nouppercase<<D<<endl;
    cout<<fixed<<setw(15)<<setprecision(2)<<showpos<<right<<setfill('_');
    cout<<B<<endl;
    cout<<setprecision(9)<<uppercase<<scientific<<noshowpos;
    cout<<C<<endl;
	}
	return 0;

}
